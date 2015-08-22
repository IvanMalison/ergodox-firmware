/* ----------------------------------------------------------------------------
 * Copyright (c) 2013, 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * Implements the "layout" section of '.../firmware/keyboard.h'
 */


#include "./fragments/includes.part.h"
#include "./fragments/macros.part.h"
#include "./fragments/types.part.h"
#include "./fragments/variables.part.h"


// ----------------------------------------------------------------------------
// keys
// ----------------------------------------------------------------------------

#include "./fragments/keys.part.h"


// ----------------------------------------------------------------------------
// LED control
// ----------------------------------------------------------------------------

#include "./fragments/led-control.part.h"


// ----------------------------------------------------------------------------
// matrix control
// ----------------------------------------------------------------------------

#include "./fragments/matrix-control.part.h"


// ----------------------------------------------------------------------------
// layout
// ----------------------------------------------------------------------------

static layout_t layout PROGMEM = {
// ............................................................................

    MATRIX_LAYER(  // layer 0 : default
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   grave,        1,        2,        3,        4,        5,   esc,
     tab,        q,        w,        e,        r,        t,   lpu1l1,
   ctrlL,        a,        s,        d,        f,        g,
shL2kcap,        z,        x,        c,        v,        b,    brktL,
lpupo2l2,      del,      esc,     altL,     guiL,
                                                                mute,  volumeU,
                                                       nop,      nop,  volumeD,
                                                        bs,     altL, lpupo1l1,
// right hand ..... ......... ......... ......... ......... ......... .........
            lpu1l1,        6,        7,        8,        9,        0,     dash,
             equal,        y,        u,        i,        o,        p,  bkslash,
                           h,        j,        k,        l,  semicol,    quote,
             brktR,        n,        m,    comma,   period,    slash, shR2kcap,
                                  altR, lpupo1l1,   arrowD,   arrowU,    ctrlR,
lpupo2l2,       bs,
   ctrlR,      nop,      nop,
    guiR,    enter,    space ),

// ............................................................................

    MATRIX_LAYER(  // layer 1 : symbols and function keys
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,       F1,       F2,       F3,       F4,       F5,      F11,
  transp,   transp,   arrowU,   transp,   transp,   transp,   lpo1l1,
  transp,   arrowL,   arrowD,   arrowR,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                   volumeD,  volumeU,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               F12,       F6,       F7,       F8,       F9,      F10,    power,
            transp, lessThan, grtrThan,   transp,   transp,    brktL,    brktR,
                      arrowL,   arrowD,   arrowU,   arrowR,   braceL,   braceR,
            transp,   transp,    brktL,    brktR,   transp,   parenL,   parenR,
                                transp,   transp,   transp,   transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,     mute,   transp  )
};

