//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBContentViewObjectBindingBaseController.h"

@class DBPeekPreviewManager;

@interface DBFileEntryCollectionViewContentViewObjectModelBinding : DBContentViewObjectBindingBaseController
{
    unsigned long long _collectionViewLayoutStyle;
    DBPeekPreviewManager *_peekPreviewManager;
}

@property(retain, nonatomic) DBPeekPreviewManager *peekPreviewManager; // @synthesize peekPreviewManager=_peekPreviewManager;
@property(nonatomic) unsigned long long collectionViewLayoutStyle; // @synthesize collectionViewLayoutStyle=_collectionViewLayoutStyle;
- (void).cxx_destruct;
- (void)db_didBindContentView:(id)arg1 toContentViewObject:(id)arg2;
- (id)contentViewObjectFromModelObject:(id)arg1 modelContext:(id)arg2;
- (unsigned long long)perSectionLayoutStyleForSection:(unsigned long long)arg1;
- (id)init;

@end

