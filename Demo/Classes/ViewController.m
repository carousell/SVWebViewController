//
//  RootViewController.m
//  SVWebViewController
//
//  Created by Sam Vermette on 21.02.11.
//  Copyright 2011 Sam Vermette. All rights reserved.
//

#import "ViewController.h"
#import "SVWebViewController.h"
#import "SVModalWebViewController.h"

@implementation ViewController

- (void)pushWebViewController {
    NSURL *URL = [NSURL URLWithString:@"http://samvermette.com"];
	SVWebViewController *webViewController = [[SVWebViewController alloc] initWithURL:URL];
    webViewController.title = @"Sam Vermette";
    [webViewController setToolbarTintColor:[UIColor redColor]];
    [webViewController setToolbarBarTintColor:[UIColor whiteColor]];
	[self.navigationController pushViewController:webViewController animated:YES];
}

- (void)presentWebViewController {
	NSURL *URL = [NSURL URLWithString:@"http://samvermette.com"];
	SVModalWebViewController *webViewController = [[SVModalWebViewController alloc] initWithURL:URL];
	webViewController.modalPresentationStyle = UIModalPresentationPageSheet;
    webViewController.title = @"Sam Vermette";
    [webViewController setNavbarBarTintColor:[UIColor orangeColor]];
    [webViewController setNavbarTintColor:[UIColor whiteColor]];
    [webViewController setToolbarBarTintColor:[UIColor whiteColor]];
    [webViewController setToolbarTintColor:[UIColor orangeColor]];
    [self presentViewController:webViewController animated:YES completion:NULL];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
	return YES;
}

@end

