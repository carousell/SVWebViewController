//
//  SVWebViewController.h
//
//  Created by Sam Vermette on 08.11.10.
//  Copyright 2010 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

@interface SVWebViewController : UIViewController

@property (nonatomic, weak) id<UIWebViewDelegate> delegate;

- (instancetype)initWithAddress:(NSString*)urlString;
- (instancetype)initWithURL:(NSURL*)URL;
- (instancetype)initWithURLRequest:(NSURLRequest *)request;

- (void)setToolbarTintColor:(UIColor *)toolbarTintColor;
- (void)setToolbarBarTintColor:(UIColor *)toolbarBarTintColor;
- (void)setToolbarBarStyle:(UIBarStyle)toolbarBarStyle;

@end
