//
//  StatusBarHUD.h
//  StatusBarHUDDemo
//
//  Created by kouliang on 15/1/27.
//  Copyright (c) 2015年 kouliang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface StatusBarHUD : NSObject
/**
 *  显示信息
 *
 *  @param msg   信息
 *  @param image 图片
 */
+ (void)showMessage:(NSString *)msg image:(UIImage *)image;

/**
 *  显示信息
 *
 *  @param msg   信息
 *  @param imageName 图片(图片高度最好在20以内, 仅限于本地图片)
 */
+ (void)showMessage:(NSString *)msg imageName:(NSString *)imageName;

/**
 *  显示成功信息
 *
 *  @param msg 信息
 */
+ (void)showSuccess:(NSString *)msg;
/**
 *  显示失败信息
 *
 *  @param msg 信息
 */
+ (void)showError:(NSString *)msg;

/**
 *  显示加载信息
 *
 *  @param msg 信息
 */
+ (void)showLoading:(NSString *)msg;

/**
 *  隐藏加载信息
 */
+ (void)hideLoading;
@end
