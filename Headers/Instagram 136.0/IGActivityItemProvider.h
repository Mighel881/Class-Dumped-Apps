//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSObject, NSURL;
@protocol OS_dispatch_group;

@interface IGActivityItemProvider : UIActivityItemProvider
{
    NSObject<OS_dispatch_group> *_group;
    NSURL *_loadedURL;
    CDUnknownBlockType _linkMetadataOverrideBlock;
}

@property(copy, nonatomic) CDUnknownBlockType linkMetadataOverrideBlock; // @synthesize linkMetadataOverrideBlock=_linkMetadataOverrideBlock;
@property(retain, nonatomic) NSURL *loadedURL; // @synthesize loadedURL=_loadedURL;
- (void).cxx_destruct;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)item;
- (id)initWithPlaceholderURL:(id)arg1 loadBlock:(CDUnknownBlockType)arg2;

@end

