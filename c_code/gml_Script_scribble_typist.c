// gml_Script_scribble_typist @ 0x1404911c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble_typist
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 **ppuVar7;
  undefined8 uVar8;
  double *pdVar9;
  double *pdVar10;
  double dVar11;
  double **ppdVar12;
  ulonglong uVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  ulonglong in_stack_fffffffffffffe40;
  undefined8 *local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined8 *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 *local_188;
  undefined8 uStack_180;
  double local_178;
  uint local_16c;
  uint local_168;
  undefined8 local_160;
  char *local_158;
  undefined4 local_150;
  double local_148;
  uint uStack_13c;
  undefined8 *local_138;
  undefined4 local_12c;
  double local_128;
  undefined4 local_11c;
  undefined8 **local_118;
  double *local_110;
  undefined1 *local_108;
  double local_100;
  uint uStack_f4;
  undefined8 *local_f0;
  byte local_e4;
  double local_e0;
  byte local_d4;
  undefined1 local_d0 [12];
  byte local_c4;
  undefined8 *local_c0;
  undefined4 local_b4;
  double local_b0;
  double dStack_a8;
  undefined8 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  uint local_70;
  undefined4 local_6c;
  
  local_158 = "gml_Script_scribble_super_glyph_delete";
  local_160 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_160;
  local_150 = 2;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(&local_f0,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = (undefined8 *)0x0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  uStack_7c = 0xffffff;
  local_88 = (undefined8 *)0x0;
  local_b4 = 0xffffff;
  local_c0 = (undefined8 *)0x0;
  local_12c = 0xffffff;
  local_138 = (undefined8 *)0x0;
  local_1ac = 0xffffff;
  local_1b8 = (undefined8 *)0x0;
  local_168 = 0xffffff;
  uStack_f4 = 0xffffff;
  local_100 = 0.0;
  uStack_13c = 0xffffff;
  local_148 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_18c = 0;
  local_198 = 0;
  local_6c = 0;
  local_78 = (undefined8 *)(double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf170) &&
     (_Init_thread_header(&DAT_141ddf170), DAT_141ddf170 == -1)) {
    DAT_141ddf168 = (longlong *)FUN_140e63aa0(DAT_1419f9628);
    _Init_thread_footer(&DAT_141ddf170);
  }
  if (DAT_141ddc19c == '\0') {
    FUN_140e64380(DAT_141ddf168,"gml_Script_scribble_super_glyph_delete");
    FUN_140e64380(param_1,"gml_Script_scribble_super_glyph_delete");
  }
  local_150 = 4;
  if (DAT_141ddc19c == '\0') {
    DAT_141ddc19c = '\x01';
    ppuVar7 = (undefined8 **)(**(code **)(*DAT_141ddf168 + 0x10))(DAT_141ddf168,DAT_141a06458);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_1a8 = DAT_1419df7b0;
    uStack_1a0 = _DAT_1419df7b8;
    if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    FUN_140041b80(&local_e0,&local_1a8);
    local_110 = &local_e0;
    ppdVar12 = &local_110;
    uVar8 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_198,1,ppdVar12);
    uVar13 = (ulonglong)ppdVar12 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_141a06198,0x80000000,&local_98,uVar13,
                  in_stack_fffffffffffffe40 & 0xffffffffffffff00);
    uVar4 = (undefined4)(uVar13 >> 0x20);
    FUN_140e609c0(DAT_141ddf168);
    if (&local_98 != ppuVar7) {
      uStack_1a0 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
      local_1a8 = local_98;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar7);
      }
      FUN_140041b80(ppuVar7,&local_1a8);
    }
    FUN_140e60910(1);
  }
  local_150 = 5;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  ppuVar7 = (undefined8 **)(**(code **)(*DAT_141ddf168 + 8))(DAT_141ddf168,DAT_141a06458);
  if (ppuVar7 != &local_f0) {
    local_1a8 = *ppuVar7;
    uStack_1a0 = ppuVar7[1];
    if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_1a8);
  }
  local_118 = &local_f0;
  if (param_4 < 1) {
    pdVar9 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar9 = (double *)*param_5;
    if (pdVar9 == &local_e0) goto LAB_140491553;
  }
  local_1a8 = (undefined8 *)*pdVar9;
  uStack_1a0 = (undefined8 *)pdVar9[1];
  if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  FUN_140041b80(&local_e0,&local_1a8);
LAB_140491553:
  local_110 = &local_e0;
  pppuVar15 = &local_118;
  pppuVar14 = (undefined8 ***)CONCAT44(uVar4,DAT_1419ff4f8);
  pdVar9 = (double *)FUN_140e634e0(param_1,param_2,&local_198,2,pppuVar14,pppuVar15);
  if (pdVar9 != &local_128) {
    local_1a8 = (undefined8 *)*pdVar9;
    uStack_1a0 = (undefined8 *)pdVar9[1];
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1a8);
  }
  local_150 = 6;
  iVar2 = FUN_140e851f0(&local_128,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_150 = 6;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_1a8 = _DAT_141dd36c8;
    uStack_1a0 = (undefined8 *)uRam0000000141dd36d0;
    if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_1a8);
    local_118 = &local_f0;
    local_110 = &local_128;
    local_1a8 = _DAT_141dd36d8;
    uStack_1a0 = puRam0000000141dd36e0;
    if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d0);
    }
    FUN_140041b80(local_d0,&local_1a8);
    local_108 = local_d0;
    pppuVar14 = &local_118;
    FUN_1401ef7f0(param_1,param_2,&local_198,3,pppuVar14);
  }
  local_150 = 8;
  uVar13 = (ulonglong)pppuVar14 & 0xffffffffffffff00;
  FUN_140e87440(&local_128,DAT_141a06148,0x80000000,&local_88,uVar13,
                (ulonglong)pppuVar15 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar13 >> 0x20);
  uStack_1a0 = (undefined8 *)CONCAT44(uStack_7c,uStack_80);
  local_1a8 = local_88;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  FUN_140041b80(&local_c0,&local_1a8);
  local_150 = 0xb;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  puVar1 = local_78;
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  uStack_1a0 = (undefined8 *)(ulonglong)local_70;
  local_1a8 = local_78;
  uStack_180._4_4_ = 7;
  local_188 = (undefined8 *)CONCAT44(local_188._4_4_,1);
  FUN_1400462a0(&local_1a8,&local_188);
  if ((1 << ((byte)uStack_180._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = local_1a8;
  uStack_180 = uStack_1a0;
  if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  FUN_140041b80(&local_f0,&local_188);
  if ((1 << ((byte)((ulonglong)uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_118 = &local_f0;
  ppuVar7 = (undefined8 **)
            FUN_140e634e0(param_1,param_2,&local_198,1,CONCAT44(uVar4,DAT_1419fd218),&local_118);
  if (ppuVar7 != &local_138) {
    local_1a8 = *ppuVar7;
    uStack_1a0 = ppuVar7[1];
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1a8);
  }
  local_150 = 0xc;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1ac = 0;
  local_1b8 = (undefined8 *)0x0;
  local_150 = 0xd;
  uStack_1a0 = (undefined8 *)(ulonglong)local_70;
  local_1a8 = puVar1;
  uStack_180._4_4_ = 7;
  local_188 = (undefined8 *)CONCAT44(local_188._4_4_,1);
  FUN_1400462a0(&local_1a8,&local_188);
  if ((1 << ((byte)uStack_180._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  iVar2 = FUN_140e4a740(&local_1a8);
  if ((1 << ((byte)((ulonglong)uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  while (0 < iVar2) {
    iVar2 = iVar2 + -1;
    local_150 = 0xf;
    uStack_180._0_4_ = local_1b0;
    uStack_180._4_4_ = local_1ac;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
      local_188 = local_1b8;
    }
    else {
      FUN_1400419b0(&local_188,&local_1b8);
    }
    uStack_1a0 = (undefined8 *)CONCAT44(7,(undefined4)uStack_1a0);
    local_1a8 = (undefined8 *)CONCAT44(local_1a8._4_4_,1);
    FUN_1400460e0(&local_188,&local_1a8);
    if ((1 << ((byte)((ulonglong)uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    iVar3 = FUN_140e4a740(&local_188);
    if (iVar3 < param_4) {
      pdVar9 = (double *)param_5[iVar3];
    }
    else {
      pdVar9 = (double *)&DAT_1419df7b0;
    }
    uVar4 = FUN_140e4a740(&local_1b8);
    pdVar10 = (double *)FUN_140e48e40(&local_138,uVar4);
    FUN_140e609c0(*local_138);
    if (pdVar9 != pdVar10) {
      local_b0 = *pdVar9;
      dStack_a8 = pdVar9[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar10);
      }
      FUN_140041b80(pdVar10,&local_b0);
    }
    if ((1 << ((byte)uStack_180._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    local_150 = 0x10;
    uVar5 = local_1ac & 0xffffff;
    if (uVar5 == 0) {
LAB_140491a8b:
      local_1b8 = (undefined8 *)((double)local_1b8 + 1.0);
    }
    else {
      if (uVar5 == 1) {
        local_1b8 = (undefined8 *)FUN_140e4b060();
        local_1ac = 0;
        goto LAB_140491a8b;
      }
      if (uVar5 == 7) {
        local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,(int)local_1b8 + 1);
      }
      else if (uVar5 == 10) {
        local_1b8 = (undefined8 *)((longlong)local_1b8 + 1);
      }
      else {
        if (uVar5 == 0xd) {
          local_1ac = 0;
          goto LAB_140491a8b;
        }
        FUN_140042910(&DAT_14172c3d8,&local_1b8,&local_1b8);
      }
    }
  }
  local_150 = 0x15;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  local_118 = &local_138;
  pppuVar15 = &local_118;
  pdVar9 = (double *)FUN_14048f980(param_1,param_2,&local_198,1,pppuVar15);
  if (pdVar9 != &local_100) {
    local_b0 = *pdVar9;
    dStack_a8 = pdVar9[1];
    FUN_140041b80(&local_100,&local_b0);
    local_168 = uStack_f4;
  }
  uVar5 = local_168;
  local_150 = 0x17;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1ac = 0;
  local_1b8 = (undefined8 *)0x0;
  local_150 = 0x18;
  iVar2 = 0;
  if ((uVar5 == 2) && (local_100 != 0.0)) {
    iVar2 = *(int *)((longlong)local_100 + 0x24);
  }
  if (0 < iVar2) {
    dVar11 = local_100;
    do {
      iVar2 = iVar2 + -1;
      local_150 = 0x1a;
      iVar3 = FUN_140e4a740(&local_1b8);
      pdVar9 = (double *)0x0;
      if (((uVar5 & 0xffffff) == 2) && (dVar11 != 0.0)) {
        if ((iVar3 < 0) || (*(int *)((longlong)dVar11 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)dVar11 + 0x24));
        }
        else {
          pdVar9 = (double *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)dVar11 + 8));
        }
        if (pdVar9 != &local_148) goto LAB_140491c13;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar9 = &local_100;
LAB_140491c13:
        local_b0 = *pdVar9;
        dStack_a8 = pdVar9[1];
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_b0);
      }
      local_150 = 0x1c;
      pdVar9 = (double *)0x0;
      if (((uStack_13c & 0xffffff) == 2) && (local_148 != 0.0)) {
        if (*(int *)((longlong)local_148 + 0x24) < 1) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        }
        else {
          pdVar9 = *(double **)((longlong)local_148 + 8);
        }
        if (pdVar9 != &local_178) goto LAB_140491c9b;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar9 = &local_148;
LAB_140491c9b:
        local_b0 = *pdVar9;
        dStack_a8 = pdVar9[1];
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_b0);
      }
      local_150 = 0x1d;
      pdVar9 = (double *)0x0;
      if (((uStack_13c & 0xffffff) == 2) && (local_148 != 0.0)) {
        if (*(int *)((longlong)local_148 + 0x24) < 2) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
        }
        else {
          pdVar9 = (double *)(*(longlong *)((longlong)local_148 + 8) + 0x10);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar9 = &local_148;
      }
      uStack_180._4_4_ = 0;
      local_188 = (undefined8 *)0x3ff0000000000000;
      FUN_1400460e0(&local_188,pdVar9);
      uStack_1a0 = (undefined8 *)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180);
      if ((1 << ((byte)uStack_180._4_4_ & 0x1f) & 0x46U) == 0) {
        local_1a8 = local_188;
      }
      else {
        FUN_1400419b0(&local_1a8,&local_188);
      }
      FUN_1400462a0(&local_1a8,&local_178);
      iVar3 = FUN_140e4a740(&local_1a8);
      if ((1 << ((byte)((ulonglong)uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)uStack_180._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if (0 < iVar3) {
        do {
          uVar4 = (undefined4)((ulonglong)pppuVar15 >> 0x20);
          iVar3 = iVar3 + -1;
          local_150 = 0x1f;
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          local_198 = 0;
          local_190 = 0;
          local_18c = 5;
          local_118 = &local_c0;
          local_110 = &local_178;
          pppuVar15 = (undefined8 ***)CONCAT44(uVar4,DAT_141a01f38);
          FUN_140e634e0(param_1,param_2,&local_198,2,pppuVar15,&local_118);
          local_150 = 0x20;
          uVar6 = local_16c & 0xffffff;
          if (uVar6 == 0) {
LAB_140491ec8:
            local_178 = local_178 + 1.0;
          }
          else {
            if (uVar6 == 1) {
              local_178 = (double)FUN_140e4b060(&local_178);
              local_16c = 0;
              goto LAB_140491ec8;
            }
            if (uVar6 == 7) {
              local_178 = (double)CONCAT44(local_178._4_4_,local_178._0_4_ + 1);
            }
            else if (uVar6 == 10) {
              local_178 = (double)((longlong)local_178 + 1);
            }
            else {
              if (uVar6 == 0xd) {
                local_16c = 0;
                goto LAB_140491ec8;
              }
              FUN_140042910(&DAT_14172c3d8,&local_178,&local_178);
            }
          }
        } while (0 < iVar3);
        dVar11 = local_100;
      }
      local_150 = 0x23;
      uVar6 = local_1ac & 0xffffff;
      if (uVar6 == 0) {
LAB_140491f5a:
        local_1b8 = (undefined8 *)((double)local_1b8 + 1.0);
      }
      else {
        if (uVar6 == 1) {
          local_1b8 = (undefined8 *)FUN_140e4b060(&local_1b8);
          local_1ac = 0;
          goto LAB_140491f5a;
        }
        if (uVar6 == 7) {
          local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,(int)local_1b8 + 1);
        }
        else if (uVar6 == 10) {
          local_1b8 = (undefined8 *)((longlong)local_1b8 + 1);
        }
        else {
          if (uVar6 == 0xd) {
            local_1ac = 0;
            goto LAB_140491f5a;
          }
          FUN_140042910(&DAT_14172c3d8,&local_1b8,&local_1b8);
        }
      }
    } while (0 < iVar2);
    uVar5 = local_168;
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_f0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_160;
  return param_3;
}

