//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWEWebViewDebugData : NSObject
{
    _Bool _isRequestInvalid;
    NSString *_URL;
    NSString *_requestLog;
    double _rowHeight;
    double _urlHeight;
    double _logHeight;
}

@property(nonatomic) double logHeight; // @synthesize logHeight=_logHeight;
@property(nonatomic) double urlHeight; // @synthesize urlHeight=_urlHeight;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) _Bool isRequestInvalid; // @synthesize isRequestInvalid=_isRequestInvalid;
@property(copy, nonatomic) NSString *requestLog; // @synthesize requestLog=_requestLog;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;

@end
