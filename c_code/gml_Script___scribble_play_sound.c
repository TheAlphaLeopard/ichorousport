// gml_Script___scribble_play_sound @ 0x140201c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **
gml_Script___scribble_play_sound
          (undefined8 param_1,undefined8 param_2,undefined8 **param_3,int param_4,
          undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  undefined8 ***pppuVar15;
  ulonglong uVar16;
  ulonglong in_stack_fffffffffffffe20;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 *local_1c8;
  uint local_1bc;
  undefined8 *local_1b8;
  undefined8 *puStack_1b0;
  uint local_1a8;
  undefined8 *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 *local_178;
  undefined8 *puStack_170;
  undefined8 *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 **local_140;
  undefined8 **local_138;
  undefined8 **local_130;
  undefined8 **local_128;
  uint local_120;
  undefined4 local_11c;
  undefined8 *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e8;
  undefined4 local_dc;
  undefined8 *local_d8;
  undefined4 local_cc;
  undefined8 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *local_b8;
  byte local_ac;
  undefined8 *local_a8;
  byte local_9c;
  undefined8 *local_98;
  undefined4 local_8c;
  int local_78;
  undefined8 local_70;
  undefined4 local_64;
  
  uVar13 = 0;
  local_1a8 = 0;
  local_150 = "gml_Script___scribble_parse_sound_array_string";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 3;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_bc = 0xffffff;
  local_c8 = (undefined8 *)0x0;
  local_cc = 0xffffff;
  local_d8 = (undefined8 *)0x0;
  uStack_18c = 0xffffff;
  local_198 = (undefined8 *)0x0;
  local_11c = 0xffffff;
  local_64 = 0xffffff;
  local_70 = 0;
  local_1bc = 0xffffff;
  local_1c8 = (undefined8 *)0x0;
  local_dc = 0xffffff;
  local_e8 = (undefined8 *)0x0;
  local_120 = 0xffffff;
  local_10c = 0xffffff;
  local_118 = (undefined8 *)0x0;
  uStack_ec = 0xffffff;
  local_f8 = (undefined8 *)0x0;
  local_1cc = 0;
  local_1d8 = 0;
  local_17c = 0;
  local_188 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (undefined8 *)0x0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddda8c) &&
     (_Init_thread_header(&DAT_141ddda8c), DAT_141ddda8c == -1)) {
    DAT_141ddda90 = (longlong *)FUN_140e63aa0(DAT_141a0a2d8);
    _Init_thread_footer(&DAT_141ddda8c);
  }
  if (DAT_141ddc09f == '\0') {
    FUN_140e64380(DAT_141ddda90,"gml_Script___scribble_parse_sound_array_string");
    FUN_140e64380(param_1,"gml_Script___scribble_parse_sound_array_string");
  }
  local_148 = 5;
  if (DAT_141ddc09f == '\0') {
    DAT_141ddc09f = '\x01';
    puVar6 = (undefined8 *)(**(code **)(*DAT_141ddda90 + 0x10))(DAT_141ddda90,DAT_1419fcb48);
    local_1b8 = DAT_1419df7b0;
    puStack_1b0 = _DAT_1419df7b8;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_1b8);
    local_138 = &local_a8;
    FUN_140e609c0(DAT_141ddda90);
    pppuVar15 = &local_138;
    puVar7 = (undefined8 *)
             gml_Script___scribble_texture_get_material(param_1,param_2,&local_1d8,1,pppuVar15);
    if (puVar7 != puVar6) {
      local_1b8 = (undefined8 *)*puVar7;
      puStack_1b0 = (undefined8 *)puVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1b8);
    }
    FUN_140e60910(1);
    uVar8 = (**(code **)(*DAT_141ddda90 + 8))(DAT_141ddda90,DAT_1419fcb48);
    ppuVar9 = (undefined8 **)(**(code **)(*DAT_141ddda90 + 0x10))(DAT_141ddda90,DAT_141a08f78);
    uVar16 = (ulonglong)pppuVar15 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_141a08f98,0x80000000,&local_c8,uVar16,
                  in_stack_fffffffffffffe20 & 0xffffffffffffff00);
    uVar4 = (undefined4)(uVar16 >> 0x20);
    FUN_140e609c0(DAT_141ddda90);
    if (&local_c8 != ppuVar9) {
      puStack_1b0 = (undefined8 *)CONCAT44(uStack_bc,uStack_c0);
      local_1b8 = local_c8;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar9);
      }
      FUN_140041b80(ppuVar9,&local_1b8);
    }
    FUN_140e60910(1);
  }
  local_148 = 8;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  ppuVar9 = &DAT_1419df7b0;
  if (param_4 < 1) {
    ppuVar10 = &DAT_1419df7b0;
  }
  else {
    ppuVar10 = (undefined8 **)*param_5;
    if (ppuVar10 == &local_b8) goto LAB_140202024;
  }
  local_1b8 = *ppuVar10;
  puStack_1b0 = ppuVar10[1];
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_1b8);
LAB_140202024:
  local_140 = &local_b8;
  uVar8 = CONCAT44(uVar4,DAT_141a0a2a8);
  ppuVar10 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar8,&local_140);
  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (ppuVar10 != &local_d8) {
    local_1b8 = *ppuVar10;
    puStack_1b0 = ppuVar10[1];
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1b8);
  }
  local_148 = 10;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  local_140 = &local_d8;
  local_1b8 = _DAT_1419e3580;
  puStack_1b0 = puRam00000001419e3588;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_1b8);
  local_138 = &local_a8;
  uStack_15c = DAT_141dcd864;
  uStack_160 = DAT_141dcd860;
  if ((1 << ((byte)DAT_141dcd864 & 0x1f) & 0x46U) == 0) {
    local_168 = DAT_141dcd858;
  }
  else {
    FUN_1400419b0(&local_168,&DAT_141dcd858);
  }
  uVar11 = CONCAT44(uVar4,DAT_141a079a8);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar11,&local_140);
  uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
  iVar2 = FUN_140e851f0(uVar8,&local_168,DAT_141955260,0);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar2 == 0) {
    local_148 = 0xc;
    puVar6 = (undefined8 *)FUN_140e4cb40(DAT_141a618e8 * 8);
    iVar2 = DAT_141a618e8;
    local_168 = puVar6;
    FUN_141290260(puVar6,DAT_141a618e0,(longlong)DAT_141a618e8 << 3);
    local_78 = iVar2;
    local_148 = 0xe;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    local_130 = &local_d8;
    uVar8 = CONCAT44(uVar4,DAT_141a0a298);
    ppuVar9 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_188,1,uVar8,&local_130);
    if (ppuVar9 != &local_198) {
      local_1b8 = *ppuVar9;
      puStack_1b0 = ppuVar9[1];
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1b8);
    }
    if (puVar6 != (undefined8 *)0x0) {
      FUN_140e4cd60(puVar6);
    }
    uVar12 = local_120;
    local_148 = 0x16;
    iVar2 = 0;
    if ((uStack_18c == 2) && (local_198 != (undefined8 *)0x0)) {
      iVar2 = *(int *)((longlong)local_198 + 0x24);
    }
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1bc = 0;
    local_1c8 = (undefined8 *)(double)(iVar2 + -1);
    iVar2 = 0;
    if ((uStack_18c == 2) && (local_198 != (undefined8 *)0x0)) {
      iVar2 = *(int *)((longlong)local_198 + 0x24);
    }
    while (0 < iVar2) {
      uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      iVar2 = iVar2 + -1;
      local_148 = 0x19;
      iVar3 = FUN_140e4a740(&local_1c8);
      ppuVar9 = (undefined8 **)0x0;
      if (((uStack_18c & 0xffffff) == 2) && (local_198 != (undefined8 *)0x0)) {
        if ((iVar3 < 0) || (*(int *)((longlong)local_198 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)local_198 + 0x24));
        }
        else {
          ppuVar9 = (undefined8 **)((longlong)iVar3 * 0x10 + local_198[1]);
        }
        if (ppuVar9 != &local_e8) goto LAB_14020246a;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        ppuVar9 = &local_198;
LAB_14020246a:
        local_178 = *ppuVar9;
        puStack_170 = ppuVar9[1];
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_178);
      }
      local_148 = 0x1b;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      ppuVar9 = (undefined8 **)(**(code **)(*DAT_141ddda90 + 8))(DAT_141ddda90,DAT_141a08f78);
      if (ppuVar9 != &local_98) {
        local_178 = *ppuVar9;
        puStack_170 = ppuVar9[1];
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_178);
      }
      local_130 = &local_98;
      local_128 = &local_e8;
      uVar8 = CONCAT44(uVar4,DAT_1419ff4f8);
      ppuVar9 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_108,2,uVar8,&local_130);
      uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (ppuVar9 != &local_118) {
        local_178 = *ppuVar9;
        puStack_170 = ppuVar9[1];
        if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_178);
        uVar12 = local_10c;
      }
      if ((uVar12 & 0xffffff) == 3) {
        if (local_118 != (undefined8 *)0x0) goto LAB_14020260c;
LAB_140202659:
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        local_138 = &local_e8;
        uVar8 = CONCAT44(uVar4,DAT_141a086f8);
        puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_188,1,uVar8,&local_138);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        puStack_1b0 = (undefined8 *)puVar6[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
          local_1b8 = (undefined8 *)*puVar6;
        }
        else {
          FUN_1400419b0(&local_1b8,puVar6);
        }
        ppuVar9 = &local_1b8;
        uVar13 = uVar13 | 5;
      }
      else {
        if ((uVar12 & 0xffffff) == 5) goto LAB_140202659;
LAB_14020260c:
        uStack_15c = uVar12;
        uStack_160 = local_110;
        if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) == 0) {
          local_168 = local_118;
        }
        else {
          FUN_1400419b0(&local_168,&local_118);
        }
        ppuVar9 = &local_168;
        uVar13 = uVar13 | 2;
      }
      local_1a8 = uVar13;
      local_178 = *ppuVar9;
      puStack_170 = ppuVar9[1];
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_178);
      if (((uVar13 & 2) != 0) &&
         (uVar13 = uVar13 & 0xfffffffd, local_1a8 = uVar13,
         (1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_168);
      }
      if (((uVar13 & 1) != 0) &&
         (uVar13 = uVar13 & 0xfffffffe, local_1a8 = uVar13,
         (1 << ((byte)((ulonglong)puStack_1b0 >> 0x20) & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1b8);
      }
      local_148 = 0x1c;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      local_140 = &local_f8;
      uVar8 = CONCAT44(uVar4,DAT_141a0a2b8);
      uVar11 = FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar8,&local_140);
      cVar1 = FUN_140e491e0(uVar11);
      uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (cVar1 == '\0') {
        local_148 = 0x22;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        local_140 = &local_198;
        local_138 = &local_1c8;
        local_178 = _DAT_1419e3580;
        puStack_170 = puRam00000001419e3588;
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_178);
        local_130 = &local_98;
        uVar8 = CONCAT44(uVar4,DAT_1419fd808);
        FUN_140e634e0(param_1,param_2,&local_1d8,3,uVar8,&local_140);
      }
      else {
        local_148 = 0x1e;
        uVar4 = FUN_140e4a740(&local_1c8);
        ppuVar9 = (undefined8 **)FUN_140e48e40(&local_198,uVar4);
        FUN_140e609c0(*local_198);
        if (&local_f8 != ppuVar9) {
          puStack_170 = (undefined8 *)CONCAT44(uStack_ec,uStack_f0);
          local_178 = local_f8;
          if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(ppuVar9);
          }
          FUN_140041b80(ppuVar9,&local_178);
        }
        FUN_140e60910(1);
      }
      local_148 = 0x25;
      uVar5 = local_1bc & 0xffffff;
      if (uVar5 == 0) {
LAB_1402029e6:
        local_1c8 = (undefined8 *)((double)local_1c8 + -1.0);
      }
      else if (uVar5 == 1) {
        dVar14 = (double)FUN_140e4b060(&local_1c8);
        local_1c8 = (undefined8 *)(dVar14 - 1.0);
        local_1bc = 0;
      }
      else if (uVar5 == 7) {
        local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,(int)local_1c8 + -1);
      }
      else if (uVar5 == 10) {
        local_1c8 = (undefined8 *)((longlong)local_1c8 + -1);
      }
      else {
        if (uVar5 == 0xd) {
          local_1bc = 0;
          goto LAB_1402029e6;
        }
        FUN_140042910(&DAT_14172c450,&local_1c8,&local_1c8);
      }
    }
    local_148 = 0x28;
    if (&local_198 != param_3) {
      puStack_170 = (undefined8 *)CONCAT44(uStack_18c,uStack_190);
      local_178 = local_198;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_178);
    }
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_70);
    }
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
  }
  else {
    local_148 = 0x2c;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    if ((param_4 < 1) || (ppuVar9 = (undefined8 **)*param_5, ppuVar9 != &local_b8)) {
      local_178 = *ppuVar9;
      puStack_170 = ppuVar9[1];
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_178);
    }
    local_140 = &local_b8;
    ppuVar9 = (undefined8 **)
              FUN_140e634e0(param_1,param_2,&local_1d8,1,CONCAT44(uVar4,DAT_141a086f8),&local_140);
    if (ppuVar9 != param_3) {
      local_178 = *ppuVar9;
      puStack_170 = ppuVar9[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_178);
    }
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

