//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class TSETweetTextStorage;

@interface TSETweetTextView : UITextView
{
    TSETweetTextStorage *_tweetTextStorage;
}

@property(readonly, nonatomic) TSETweetTextStorage *tweetTextStorage; // @synthesize tweetTextStorage=_tweetTextStorage;
- (void).cxx_destruct;
@property(nonatomic) _Bool highlightEntities;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
