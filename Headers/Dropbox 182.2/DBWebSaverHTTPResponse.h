//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface DBWebSaverHTTPResponse : NSObject
{
    NSString *_html;
    NSURL *_url;
    NSURL *_baseURL;
    NSString *_title;
    long long _height;
    long long _width;
}

@property(readonly, nonatomic) long long width; // @synthesize width=_width;
@property(readonly, nonatomic) long long height; // @synthesize height=_height;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *html; // @synthesize html=_html;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isHTMLFile;
- (id)db_parseJavascriptString:(id)arg1;
- (id)initWithWebSaverJavascriptResponse:(id)arg1;

@end
