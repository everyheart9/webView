//
//  GYWebViewViewController.h
//  HSConsumer
//
//  Created by chenwy on 2017/11/14.
//  Copyright © 2017年 TECHNOLOGY DEVELOP CO.,LTD. All rights reserved.
//

#import "GYViewController.h"

@interface GYWebViewViewController : GYViewController <UIWebViewDelegate, NSURLConnectionDelegate>

//定义一个属性，方便外接调用
@property (nonatomic, strong) UIWebView *webView;

//声明一个方法，外接调用时，只需要传递一个URL即可
- (void)loadHTML:(NSString *)htmlString;

@end
