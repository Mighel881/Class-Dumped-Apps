//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASControlNode.h>

@interface _TtC7Display12ASButtonNode : ASControlNode
{
    // Error parsing type: , name: titleNode
    // Error parsing type: , name: highlightedTitleNode
    // Error parsing type: , name: disabledTitleNode
    // Error parsing type: , name: imageNode
    // Error parsing type: , name: disabledImageNode
    // Error parsing type: , name: backgroundImageNode
    // Error parsing type: , name: highlightedBackgroundImageNode
    // Error parsing type: , name: contentEdgeInsets
    // Error parsing type: , name: contentHorizontalAlignment
    // Error parsing type: , name: laysOutHorizontally
    // Error parsing type: , name: contentSpacing
    // Error parsing type: , name: calculatedTitleSize
    // Error parsing type: , name: calculatedHighlightedTitleSize
    // Error parsing type: , name: calculatedDisabledTitleSize
}

- (void).cxx_destruct;
- (id)initWithLayerBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (id)initWithViewBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (void)layout;
@property(nonatomic) _Bool enabled;
- (_Bool)isEnabled;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (id)init;

@end
