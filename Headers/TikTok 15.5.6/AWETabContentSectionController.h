//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseListSectionController.h"

@protocol AWETabContentSectionControllerDelegate;

@interface AWETabContentSectionController : AWEBaseListSectionController
{
    id <AWETabContentSectionControllerDelegate> _delegate;
}

+ (Class)sectionViewModelClass;
@property(nonatomic) __weak id <AWETabContentSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configCell:(id)arg1 index:(long long)arg2 model:(id)arg3;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1 model:(id)arg2 collectionViewSize:(struct CGSize)arg3;
- (Class)cellClass;

@end
