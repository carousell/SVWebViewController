//
//  SVModalWebViewController.h
//
//  Created by Oliver Letterer on 13.08.11.
//  Copyright 2011 Home. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

#import <UIKit/UIKit.h>

@interface SVModalWebViewController : UINavigationController

@property (nonatomic, weak) id<UIWebViewDelegate> webViewDelegate;

- (instancetype)initWithAddress:(NSString*)urlString;
- (instancetype)initWithURL:(NSURL *)URL;
- (instancetype)initWithURLRequest:(NSURLRequest *)request;

- (void)setNavbarTintColor:(UIColor *)navbarTintColor;
- (void)setNavbarBarTintColor:(UIColor *)navbarBarTintColor;
- (void)setNavbarBarStyle:(UIBarStyle *)navbarBarStyle;

- (void)setToolbarTintColor:(UIColor *)toolbarTintColor;
- (void)setToolbarBarTintColor:(UIColor *)toolbarBarTintColor;
- (void)setToolbarBarStyle:(UIBarStyle *)toolbarBarStyle;

@end
