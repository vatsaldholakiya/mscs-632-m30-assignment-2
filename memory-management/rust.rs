fn show_values(nums:&Vec<i32>){
    println!("values: {:?}",nums);
}
fn add_value(nums:&mut Vec<i32>){
    nums.push(40);
}
fn use_values(nums:Vec<i32>){
    println!("inside function: {:?}",nums);
}
fn main(){
    let num=Box::new(32);
    println!("number: {}",num);

    let ref_num=&num;
    println!("reference: {}",ref_num);

    let mut values=Vec::new();
    values.push(10);values.push(20);values.push(30);

    add_value(&mut values);
    show_values(&values);
    println!("still in main: {:?}",values);

    use_values(values);
    // println!("{:?}",values); // uncomment: ownership already moved

    drop(num);

    let photos:Vec<Vec<u8>>=(0..10)
        .map(|_|vec![1u8;1024*1024]).collect();

    println!("allocated {} MB of photos",photos.len());
    drop(photos);

    println!("done");
}
