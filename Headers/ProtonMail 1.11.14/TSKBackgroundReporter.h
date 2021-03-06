//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrustKit/NSURLSessionTaskDelegate-Protocol.h>

@class NSString, NSURLSession, TSKReportsRateLimiter;

@interface TSKBackgroundReporter : NSObject <NSURLSessionTaskDelegate>
{
    _Bool _shouldRateLimitReports;
    NSURLSession *_backgroundSession;
    NSString *_appBundleId;
    NSString *_appVersion;
    NSString *_appVendorId;
    NSString *_appPlatform;
    NSString *_appPlatformVersion;
    TSKReportsRateLimiter *_rateLimiter;
}

@property(nonatomic) _Bool shouldRateLimitReports; // @synthesize shouldRateLimitReports=_shouldRateLimitReports;
@property(retain, nonatomic) TSKReportsRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
@property(retain, nonatomic) NSString *appPlatformVersion; // @synthesize appPlatformVersion=_appPlatformVersion;
@property(retain, nonatomic) NSString *appPlatform; // @synthesize appPlatform=_appPlatform;
@property(retain, nonatomic) NSString *appVendorId; // @synthesize appVendorId=_appVendorId;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)pinValidationFailedForHostname:(id)arg1 port:(id)arg2 certificateChain:(id)arg3 notedHostname:(id)arg4 reportURIs:(id)arg5 includeSubdomains:(_Bool)arg6 enforcePinning:(_Bool)arg7 knownPins:(id)arg8 validationResult:(long long)arg9 expirationDate:(id)arg10;
- (id)initAndRateLimitReports:(_Bool)arg1 sharedContainerIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

