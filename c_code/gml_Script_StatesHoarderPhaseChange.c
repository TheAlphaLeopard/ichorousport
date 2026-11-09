// gml_Script_StatesHoarderPhaseChange @ 0x140557240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesHoarderPhaseChange
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  uint uVar8;
  undefined1 **ppuVar9;
  bool bVar10;
  code *pcVar11;
  undefined8 **ppuVar12;
  undefined4 uVar14;
  longlong *plVar13;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined1 *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 *local_e8;
  undefined1 *local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 *local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  local_1d0 = "gml_Script_StatesHoarderStompRapid";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 0x314;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_188,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_80 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_18c = 0xffffff;
  local_198 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1c8 = 0x316;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_a4 = *(undefined4 *)((longlong)param_5 + 0xc);
  local_a8 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) == 0) {
    local_b0 = *param_5;
  }
  else {
    FUN_1400419b0(&local_b0);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddfd00) &&
     (_Init_thread_header(&DAT_141ddfd00), DAT_141ddfd00 == -1)) {
    _DAT_141ddfb0c = 0;
    _DAT_141ddfb00 = 0x4000000000000000;
    _DAT_141ddfb20 = 0;
    _DAT_141ddfb14 = 0;
    _DAT_141ddfb24 = 1;
    _DAT_141ddfb34 = 0;
    _DAT_141ddfb28 = 0x3ff0000000000000;
    _DAT_141ddfb38 = 2;
    _DAT_141ddfb48 = 0;
    _DAT_141ddfb3c = 0x4008000000000000;
    _DAT_141ddfb4c = 3;
    atexit((_func_5014 *)&LAB_141482070);
    _Init_thread_footer(&DAT_141ddfd00);
  }
  uVar8 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddfb00 + (longlong)(int)uVar8 * 0x14,&local_b0,DAT_141955260,0);
    uVar14 = (undefined4)((ulonglong)pcVar11 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141ddfb10 + (longlong)(int)uVar8 * 0x14);
      if (iVar3 == 0) {
        local_1c8 = 0x31a;
        uStack_1ec = 0xf;
        local_1f8 = (longlong *)0x100000100000167;
        local_1b8 = (undefined1 *)0x100000100000167;
        uStack_1b0 = uStack_1f0;
        uStack_1ac = 0xf;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_1b8);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_f8);
        local_1c8 = 0x31b;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_fc = 0;
        local_108 = 0;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_108);
        local_1c8 = 0x31c;
        if (local_80 != &local_198) {
          local_1f8 = (longlong *)*local_80;
          uStack_1f0 = *(undefined4 *)(local_80 + 1);
          uStack_1ec = *(undefined4 *)((longlong)local_80 + 0xc);
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          FUN_140041b80(&local_198,&local_1f8);
        }
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_198);
        local_1c8 = 0x31e;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar5 != &local_188) {
          local_1f8 = (longlong *)*puVar5;
          uStack_1f0 = *(undefined4 *)(puVar5 + 1);
          uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_1f8);
        }
        local_e8 = &local_188;
        local_1f8 = (longlong *)CONCAT44(uRam0000000141dd3f4c,_DAT_141dd3f48);
        uStack_1f0 = uRam0000000141dd3f50;
        uStack_1ec = DAT_141dd3f54;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_1f8);
        local_e0 = local_178;
        local_1f8 = (longlong *)CONCAT44(uRam0000000141dc66e4,_DAT_141dc66e0);
        uStack_1f0 = uRam0000000141dc66e8;
        uStack_1ec = uRam0000000141dc66ec;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_1f8);
        local_d8 = &local_168;
        uVar4 = CONCAT44(uVar14,DAT_1419ff3d8);
        FUN_140e634e0(param_1,param_2,&local_1e8,3,uVar4,&local_e8);
        uVar14 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_1c8 = 799;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        if (puVar5 != &local_188) {
          local_1f8 = (longlong *)*puVar5;
          uStack_1f0 = *(undefined4 *)(puVar5 + 1);
          uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_1f8);
        }
        local_e8 = &local_188;
        local_1f8 = (longlong *)CONCAT44(uRam0000000141dd3f2c,_DAT_141dd3f28);
        uStack_1f0 = uRam0000000141dd3f30;
        uStack_1ec = DAT_141dd3f34;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_1f8);
        local_e0 = local_178;
        local_1f8 = (longlong *)CONCAT44(uRam0000000141dc66e4,_DAT_141dc66e0);
        uStack_1f0 = uRam0000000141dc66e8;
        uStack_1ec = uRam0000000141dc66ec;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_1f8);
        local_d8 = &local_168;
        FUN_140e634e0(param_1,param_2,&local_1e8,3,CONCAT44(uVar14,DAT_1419ff3d8),&local_e8);
        local_1c8 = 0x321;
        ppuVar7 = (undefined1 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
        (**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        uStack_1ec = 0xf;
        local_1f8 = (longlong *)0x1000000000000ee;
        plVar13 = param_1;
        FUN_140e87170(&local_1f8,DAT_1419fe0e8,0x80000000,&local_90,param_1,param_2);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        uStack_1ec = 6;
        local_1f8 = param_1;
        FUN_140e87440(&local_1f8,DAT_1419fe0e8,0x80000000,&local_a0,
                      (ulonglong)plVar13 & 0xffffffffffffff00,param_2 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        iVar3 = FUN_140e851f0(&local_90,&local_a0,DAT_141955260,1);
        bVar10 = iVar3 == -2 || -1 < iVar3;
        if (bVar10) {
          uStack_1ec = 0;
          local_1f8 = (longlong *)0x3ff0000000000000;
          ppuVar9 = (undefined1 **)&local_1f8;
        }
        else {
          uStack_1ac = 0;
          local_1b8 = &DAT_bff0000000000000;
          ppuVar9 = &local_1b8;
        }
        uVar1 = uStack_1ac;
        uVar14 = uStack_1ec;
        FUN_140e609c0(param_1);
        if (ppuVar9 != ppuVar7) {
          local_80 = (undefined8 *)*ppuVar9;
          uStack_78 = *(undefined4 *)(ppuVar9 + 1);
          uStack_74 = *(undefined4 *)((longlong)ppuVar9 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(ppuVar7);
          }
          FUN_140041b80(ppuVar7,&local_80);
        }
        if ((bVar10) && ((1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_1f8);
        }
        if ((iVar3 != -2 && -1 >= iVar3) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140e60910(1);
        local_1c8 = 0x323;
      }
      else if (iVar3 == 1) {
        local_1c8 = 0x327;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        uStack_1ec = 0xf;
        local_1f8 = (longlong *)0x100000100000167;
        local_1b8 = (undefined1 *)0x100000100000167;
        uStack_1b0 = uStack_1f0;
        uStack_1ac = 0xf;
        if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_1b8);
        local_e8 = &local_188;
        local_1f8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_1f0 = DAT_1419df7b8;
        uStack_1ec = DAT_1419df7bc;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_1f8);
        local_e0 = local_178;
        ppuVar12 = &local_e8;
        uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_1e8,2,ppuVar12);
        uVar14 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
        cVar2 = FUN_140e491e0(uVar4);
        if (cVar2 != '\0') {
          local_1c8 = 0x329;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_1a8 = 0;
          local_1a0 = 0;
          local_19c = 5;
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          local_118 = 0;
          local_110 = 0;
          local_10c = 5;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
          if (puVar5 != &local_168) {
            local_1f8 = (longlong *)*puVar5;
            uStack_1f0 = *(undefined4 *)(puVar5 + 1);
            uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_168);
            }
            FUN_140041b80(&local_168,&local_1f8);
          }
          local_d8 = &local_168;
          local_1f8 = (longlong *)CONCAT44(uRam0000000141dd3f4c,_DAT_141dd3f48);
          uStack_1f0 = uRam0000000141dd3f50;
          uStack_1ec = DAT_141dd3f54;
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_158);
          }
          FUN_140041b80(local_158,&local_1f8);
          local_d0 = local_158;
          if (puVar5 != &local_148) {
            local_1f8 = (longlong *)*puVar5;
            uStack_1f0 = *(undefined4 *)(puVar5 + 1);
            uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            FUN_140041b80(&local_148,&local_1f8);
          }
          local_c8 = &local_148;
          local_1f8 = (longlong *)CONCAT44(uRam0000000141dd3f4c,_DAT_141dd3f48);
          uStack_1f0 = uRam0000000141dd3f50;
          uStack_1ec = DAT_141dd3f54;
          if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_1f8);
          local_c0 = local_138;
          uVar4 = CONCAT44(uVar14,DAT_1419ff4f8);
          puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar4,&local_d8);
          uVar14 = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
          uStack_1b0 = *(undefined4 *)(puVar5 + 1);
          if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
            local_1b8 = (undefined1 *)*puVar5;
          }
          else {
            FUN_1400419b0(&local_1b8,puVar5);
          }
          uStack_1ec = 7;
          local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,1);
          FUN_1400460e0(&local_1b8,&local_1f8);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_1f8 = (longlong *)local_1b8;
          uStack_1f0 = uStack_1b0;
          uStack_1ec = uStack_1ac;
          if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_128);
          }
          FUN_140041b80(local_128,&local_1f8);
          if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          uVar4 = CONCAT44(uVar14,DAT_1419fd648);
          local_b8 = local_128;
          FUN_140e634e0(param_1,param_2,&local_1a8,3,uVar4,&local_c8);
          uVar14 = (undefined4)((ulonglong)uVar4 >> 0x20);
        }
        local_1c8 = 0x32d;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar5 != &local_188) {
          local_1f8 = (longlong *)*puVar5;
          uStack_1f0 = *(undefined4 *)(puVar5 + 1);
          uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_1f8);
        }
        local_e8 = &local_188;
        local_1f8 = (longlong *)CONCAT44(uRam0000000141dd3f4c,_DAT_141dd3f48);
        uStack_1f0 = uRam0000000141dd3f50;
        uStack_1ec = DAT_141dd3f54;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_1f8);
        local_e0 = local_178;
        uVar4 = FUN_140e634e0(param_1,param_2,&local_1e8,2,CONCAT44(uVar14,DAT_1419ff4f8),&local_e8)
        ;
        uStack_1ec = 0;
        local_1f8 = (longlong *)0x4000000000000000;
        iVar3 = FUN_140e851f0(uVar4,&local_1f8,DAT_141955260,1);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        if (0 < iVar3) {
          local_1c8 = 0x32e;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_1a8 = 0;
          local_1a0 = 0;
          local_19c = 5;
          local_1f8 = (longlong *)CONCAT44(uRam00000001419e6334,_DAT_1419e6330);
          uStack_1f0 = uRam00000001419e6338;
          uStack_1ec = uRam00000001419e633c;
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          FUN_140041b80(&local_168,&local_1f8);
          local_d8 = &local_168;
          local_1f8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_1f0 = DAT_1419df7b8;
          uStack_1ec = DAT_1419df7bc;
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_158);
          }
          FUN_140041b80(local_158,&local_1f8);
          local_d0 = local_158;
          gml_Script_truestate_begin_step(param_1,param_2,&local_1a8,2,&local_d8);
        }
        local_1c8 = 0x330;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        if (puVar5 != &local_188) {
          local_1f8 = (longlong *)*puVar5;
          uStack_1f0 = *(undefined4 *)(puVar5 + 1);
          uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_1f8);
        }
        local_e8 = &local_188;
        local_1f8 = (longlong *)CONCAT44(uRam0000000141dc66e4,_DAT_141dc66e0);
        uStack_1f0 = uRam0000000141dc66e8;
        uStack_1ec = uRam0000000141dc66ec;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_1f8);
        local_e0 = local_178;
        local_1f8 = (longlong *)CONCAT44(uRam00000001419e6394,_DAT_1419e6390);
        uStack_1f0 = uRam00000001419e6398;
        uStack_1ec = uRam00000001419e639c;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_1f8);
        local_d8 = &local_168;
        FUN_140e609c0(param_1);
        puVar5 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_1e8,3,&local_e8);
        if (puVar5 != puVar6) {
          local_1f8 = (longlong *)*puVar5;
          uStack_1f0 = *(undefined4 *)(puVar5 + 1);
          uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_1f8);
        }
        FUN_140e60910(1);
        local_1c8 = 0x332;
        if (local_80 != &local_198) {
          local_1f8 = (longlong *)*local_80;
          uStack_1f0 = *(undefined4 *)(local_80 + 1);
          uStack_1ec = *(undefined4 *)((longlong)local_80 + 0xc);
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          FUN_140041b80(&local_198,&local_1f8);
        }
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_198);
        local_1c8 = 0x334;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
        FUN_140e63610(param_1,param_2,&local_1e8,0,uVar4,0);
        local_1c8 = 0x335;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
        FUN_140e63610(param_1,param_2,&local_1e8,0,uVar4,0);
        local_1c8 = 0x337;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
        FUN_140e63610(param_1,param_2,&local_1e8,0,uVar4,0);
        local_1c8 = 0x339;
      }
      else if (iVar3 == 2) {
        local_1c8 = 0x33d;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_1e8,0,uVar4,0);
        local_1c8 = 0x33e;
      }
      else if (iVar3 == 3) {
        local_1c8 = 0x342;
      }
      break;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1d8;
  return param_3;
}

