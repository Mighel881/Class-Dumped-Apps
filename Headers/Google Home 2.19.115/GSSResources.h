//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

@interface GSSResources : NSObject
{
    NSBundle *_bundle;
    NSString *_bundleName;
    NSString *_fullBundleName;
}

+ (id)bundleSearchOrder;
+ (id)resources;
@property(retain, nonatomic) NSString *fullBundleName; // @synthesize fullBundleName=_fullBundleName;
@property(retain, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (id)stringForID:(int)arg1;
- (id)init;

@end

