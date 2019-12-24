//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "AWEPOIDetailCommentViewDelegate-Protocol.h"

@class AWEPOIDetailCommentView, NSString;
@protocol AWEPOICommentDetailTableViewCellDelegate;

@interface AWEPOICommentDetailTableViewCell : UITableViewCell <AWEPOIDetailCommentViewDelegate>
{
    id <AWEPOICommentDetailTableViewCellDelegate> _delegate;
    AWEPOIDetailCommentView *_commentView;
}

@property(retain, nonatomic) AWEPOIDetailCommentView *commentView; // @synthesize commentView=_commentView;
@property(nonatomic) __weak id <AWEPOICommentDetailTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commentViewDidTapExpandButton:(id)arg1;
- (void)commentViewDidTapOnCommentContent:(id)arg1;
- (void)commentView:(id)arg1 didSelectPhotoAtIndex:(long long)arg2 sourceView:(id)arg3;
- (void)configureWithComment:(id)arg1 detailLevel:(long long)arg2 expanded:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
