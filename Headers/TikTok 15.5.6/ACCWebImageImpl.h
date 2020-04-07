//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCWebImageProtocol-Protocol.h"

@class NSString;

@interface ACCWebImageImpl : NSObject <ACCWebImageProtocol>
{
}

+ (void)button:(id)arg1 setImageWithURLArray:(id)arg2 forState:(unsigned long long)arg3 placeholder:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)imageView:(id)arg1 setImageWithURLArray:(id)arg2 placeholder:(id)arg3 progress:(CDUnknownBlockType)arg4 postProcess:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)imageView:(id)arg1 setImageWithURLArray:(id)arg2 placeholder:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)imageView:(id)arg1 setImageWithURLArray:(id)arg2 placeholder:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)imageView:(id)arg1 setImageWithURLArray:(id)arg2 placeholder:(id)arg3;
+ (void)imageView:(id)arg1 setImageWithURLArray:(id)arg2;
+ (void)cancelImageViewRequest:(id)arg1;
+ (void)requestImageWithURLArray:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)animatedImageView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
