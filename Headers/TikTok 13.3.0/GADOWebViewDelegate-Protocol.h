//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADOWebView, NSError, NSString, NSURLRequest;

@protocol GADOWebViewDelegate <NSObject>
- (void)webViewProcessDidTerminate:(GADOWebView *)arg1;
- (void)webView:(GADOWebView *)arg1 runJavaScriptTextInputPanelWithTitle:(NSString *)arg2 defaultText:(NSString *)arg3 prompt:(NSString *)arg4 completionHandler:(void (^)(NSString *))arg5;
- (void)webView:(GADOWebView *)arg1 runJavaScriptConfirmPanelWithTitle:(NSString *)arg2 message:(NSString *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)webView:(GADOWebView *)arg1 runJavaScriptAlertPanelWithTitle:(NSString *)arg2 message:(NSString *)arg3 completionHandler:(void (^)(void))arg4;
- (void)webView:(GADOWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewDidFinishLoad:(GADOWebView *)arg1;
- (void)webViewDidStartLoad:(GADOWebView *)arg1;
- (_Bool)webView:(GADOWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
@end
