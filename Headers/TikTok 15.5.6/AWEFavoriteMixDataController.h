//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class AWEMixVideoModel, NSNumber, NSString;

@interface AWEFavoriteMixDataController : AWEListDataController
{
    NSString *_pushMixIDs;
    NSNumber *_cursor;
    AWEMixVideoModel *_justRemovedModel;
}

@property(retain, nonatomic) AWEMixVideoModel *justRemovedModel; // @synthesize justRemovedModel=_justRemovedModel;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) NSString *pushMixIDs; // @synthesize pushMixIDs=_pushMixIDs;
- (void).cxx_destruct;
- (id)requestUrl;
- (_Bool)addAwemeWithItemID:(id)arg1;
- (_Bool)removeWithItemID:(id)arg1;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end
