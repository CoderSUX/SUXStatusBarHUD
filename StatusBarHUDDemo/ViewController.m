//
//  ViewController.m
//  StatusBarHUDDemo
//
//  Created by kouliang on 15/1/27.
//  Copyright (c) 2015年 kouliang. All rights reserved.
//

#import "ViewController.h"
#import "StatusBarHUD.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)showSuccess {
    [StatusBarHUD showSuccess:@"Done"];
}
- (IBAction)showError {
    [StatusBarHUD showError:@"Error"];
}

@end
