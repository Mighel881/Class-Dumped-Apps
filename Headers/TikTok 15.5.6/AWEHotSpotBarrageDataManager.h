//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEAwemeModel, AWECommentListManager, NSMutableArray;

@interface AWEHotSpotBarrageDataManager : NSObject
{
    _Bool _disableAuthorInfo;
    AWEAwemeModel *_model;
    NSMutableArray *_dataArray;
    AWECommentListManager *_commentListManager;
}

@property(retain, nonatomic) AWECommentListManager *commentListManager; // @synthesize commentListManager=_commentListManager;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) _Bool disableAuthorInfo; // @synthesize disableAuthorInfo=_disableAuthorInfo;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)referString;
- (void)fetchCommentsWithCompletion:(CDUnknownBlockType)arg1;

@end
