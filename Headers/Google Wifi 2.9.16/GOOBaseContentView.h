//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOOContentView-Protocol.h"

@class NSString;
@protocol GOOContentViewObject;

@interface GOOBaseContentView : UIView <GOOContentView>
{
    _Bool _selected;
    _Bool _highlighted;
    id <GOOContentViewObject> _object;
}

@property(readonly, nonatomic) id <GOOContentViewObject> object; // @synthesize object=_object;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
