//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GIMBaseContentViewObject.h>

@class GIMMe, NSString;
@protocol GFMIHTMLTextContentViewObjectDelegate;

@interface GFMIHTMLTextContentViewObject : GIMBaseContentViewObject
{
    unsigned char _textAlignment;
    NSString *_htmlText;
    id <GFMIHTMLTextContentViewObjectDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <GFMIHTMLTextContentViewObjectDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned char textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) NSString *htmlText; // @synthesize htmlText=_htmlText;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)initWithHTMLText:(id)arg1 alignment:(unsigned char)arg2 delegate:(id)arg3;
- (id)initWithHTMLText:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(nonatomic) __weak GIMMe *gimme;

@end

