//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface AWEBenchMarkResourceModel : MTLModel <MTLJSONSerializing>
{
    NSString *_h264VideoURL;
    NSString *_h265VideoURL;
    NSString *_imageURL;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *h265VideoURL; // @synthesize h265VideoURL=_h265VideoURL;
@property(retain, nonatomic) NSString *h264VideoURL; // @synthesize h264VideoURL=_h264VideoURL;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

