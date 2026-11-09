// gml_Script_anon_8168_gml_Object_oPlayer_Other_10 @ 0x140c6b870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_8168_gml_Object_oPlayer_Other_10
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined4 uVar12;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 **in_stack_fffffffffffffd80;
  ulonglong uVar13;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined8 local_1f8;
  byte local_1ec;
  undefined8 local_1e8;
  byte local_1dc;
  undefined8 local_1d8;
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined8 local_1a8;
  byte local_19c;
  undefined8 local_198;
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_140 = "gml_Script_anon@7305@gml_Object_oPlayer_Other_10";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x138;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_1f8,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_24c = 0;
  local_258 = 0;
  local_23c = 0;
  local_248 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x13a;
  local_a8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ffbb8);
  uStack_26c = 0;
  local_278 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(local_a8,&local_278,DAT_141955260,1);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if (0 < iVar2) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8688);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_138 = 0x13c;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      uVar12 = (undefined4)((ulonglong)pcVar8 >> 0x20);
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ffbb8);
      local_a8 = puVar4;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a574b0);
      if (puVar5 != &local_1f8) {
        local_278 = (longlong *)*puVar5;
        uStack_270 = *(undefined4 *)(puVar5 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_278);
      }
      local_128 = &local_1f8;
      uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_260 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
        local_268 = *puVar4;
      }
      else {
        FUN_1400419b0(&local_268,puVar4);
      }
      uStack_26c = 0;
      local_278 = (longlong *)0x4010000000000000;
      FUN_140046500(&local_268,&local_278);
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_278 = (longlong *)local_268;
      uStack_270 = uStack_260;
      uStack_26c = uStack_25c;
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_278);
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_120 = &local_1e8;
      local_278 = (longlong *)CONCAT44(uRam0000000141dc7494,_DAT_141dc7490);
      uStack_270 = uRam0000000141dc7498;
      uStack_26c = uRam0000000141dc749c;
      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_278);
      local_118 = &local_1d8;
      puVar4 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_248,1,CONCAT44(uVar12,DAT_141a047c8),&local_128)
      ;
      uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_260 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
        local_268 = *puVar4;
      }
      else {
        FUN_1400419b0(&local_268,puVar4);
      }
      uStack_26c = 7;
      local_278 = (longlong *)CONCAT44(local_278._4_4_,1);
      FUN_1400460e0(&local_268,&local_278);
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_278 = (longlong *)local_268;
      uStack_270 = uStack_260;
      uStack_26c = uStack_25c;
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_278);
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_110 = local_1c8;
      ppuVar9 = &local_120;
      puVar4 = (undefined8 *)gml_RoomCC_rmGravePit01_0_Create(param_1,param_2,&local_258,3,ppuVar9);
      uVar12 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
      if (puVar4 != &local_158) {
        local_278 = (longlong *)*puVar4;
        uStack_270 = *(undefined4 *)(puVar4 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_278);
      }
      local_138 = 0x13e;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      local_128 = &local_158;
      if (puVar5 != &local_1e8) {
        local_278 = (longlong *)*puVar5;
        uStack_270 = *(undefined4 *)(puVar5 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_278);
      }
      local_120 = &local_1e8;
      in_stack_fffffffffffffd80 = &local_128;
      puVar4 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_248,1,CONCAT44(uVar12,DAT_1419fd658),
                             in_stack_fffffffffffffd80);
      if (puVar4 != &local_1d8) {
        local_278 = (longlong *)*puVar4;
        uStack_270 = *(undefined4 *)(puVar4 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_278);
      }
      local_118 = &local_1d8;
      local_278 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_270 = uRam00000001419df7a8;
      uStack_26c = uRam00000001419df7ac;
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_278);
      local_110 = local_1c8;
      pcVar8 = (code *)&local_120;
      gml_Script_pal_swap_layer_init(param_1,param_2,&local_258,3,pcVar8);
    }
  }
  local_138 = 0x142;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd428);
  local_d8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd5d8);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  local_d0 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  uStack_26c = 6;
  uVar13 = (ulonglong)in_stack_fffffffffffffd80 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  local_278 = param_1;
  FUN_140e87440(&local_278,DAT_141a0a728,0x80000000,&local_58,uVar10,uVar13);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  uStack_26c = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_278 = param_1;
  FUN_140e87440(&local_278,DAT_141a0cfc8,0x80000000,&local_68,uVar10,uVar13);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  uStack_26c = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_278 = param_1;
  FUN_140e87440(&local_278,DAT_1419fe0e8,0x80000000,&local_228,uVar10,uVar13);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  uStack_26c = 6;
  local_278 = param_1;
  FUN_140e87440(&local_278,DAT_1419fe158,0x80000000,&local_238,uVar10 & 0xffffffffffffff00,
                uVar13 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = (longlong *)local_58;
  uStack_270 = uStack_50;
  uStack_26c = uStack_4c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_278);
  local_128 = &local_1f8;
  local_278 = (longlong *)local_68;
  uStack_270 = uStack_60;
  uStack_26c = uStack_5c;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_278);
  local_120 = &local_1e8;
  uStack_25c = local_21c;
  uStack_260 = local_220;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
    local_268 = local_228;
  }
  else {
    FUN_1400419b0(&local_268,&local_228);
  }
  FUN_1400460e0(&local_268,uVar3);
  local_278 = (longlong *)local_268;
  uStack_270 = uStack_260;
  uStack_26c = uStack_25c;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_278);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_118 = &local_1d8;
  uStack_25c = local_22c;
  uStack_260 = local_230;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) == 0) {
    local_268 = local_238;
  }
  else {
    FUN_1400419b0(&local_268,&local_238);
  }
  FUN_1400460e0(&local_268,local_d8);
  local_278 = (longlong *)local_268;
  uStack_270 = uStack_260;
  uStack_26c = uStack_25c;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_278);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_110 = local_1c8;
  uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_260 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
    local_268 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_268,puVar4);
  }
  FUN_140042560(&local_268,local_d0);
  local_278 = (longlong *)local_268;
  uStack_270 = uStack_260;
  uStack_26c = uStack_25c;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_278);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_108 = local_1b8;
  if (puVar5 != &local_1a8) {
    local_278 = (longlong *)*puVar5;
    uStack_270 = *(undefined4 *)(puVar5 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_278);
  }
  local_100 = &local_1a8;
  if (puVar6 != &local_198) {
    local_278 = (longlong *)*puVar6;
    uStack_270 = *(undefined4 *)(puVar6 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_278);
  }
  local_f8 = &local_198;
  local_278 = (longlong *)CONCAT44(uRam00000001419ed064,_DAT_1419ed060);
  uStack_270 = uRam00000001419ed068;
  uStack_26c = uRam00000001419ed06c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_278);
  local_f0 = local_188;
  local_278 = (longlong *)CONCAT44(uRam00000001419ecfc4,_DAT_1419ecfc0);
  uStack_270 = uRam00000001419ecfc8;
  uStack_26c = uRam00000001419ecfcc;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_278);
  local_e8 = local_178;
  FUN_1403ae470(param_1,param_2,&local_258,9,&local_128);
  local_138 = 0x143;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e87170(uVar3,DAT_141a0cfc8,0x80000000,&local_168,param_1,param_2);
  plVar11 = param_1;
  FUN_140e87170(uVar3,DAT_141a0a728,0x80000000,&local_b8,param_1,param_2);
  uVar12 = (undefined4)((ulonglong)plVar11 >> 0x20);
  local_278 = (longlong *)local_b8;
  uStack_270 = uStack_b0;
  uStack_26c = uStack_ac;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_278);
  local_128 = &local_1f8;
  local_278 = (longlong *)CONCAT44(uRam00000001419ecfc4,_DAT_1419ecfc0);
  uStack_270 = uRam00000001419ecfc8;
  uStack_26c = uRam00000001419ecfcc;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_278);
  local_120 = &local_1e8;
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_248,1,CONCAT44(uVar12,DAT_141a049b8),&local_128);
  if (puVar4 != &local_1d8) {
    local_278 = (longlong *)*puVar4;
    uStack_270 = *(undefined4 *)(puVar4 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_278);
  }
  local_118 = &local_1d8;
  uVar3 = FUN_140e79090(&local_258,2,&local_120);
  uStack_25c = local_15c;
  uStack_260 = local_160;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
    local_268 = local_168;
  }
  else {
    FUN_1400419b0(&local_268,&local_168);
  }
  FUN_140046880(&local_268,uVar3);
  local_278 = (longlong *)local_268;
  uStack_270 = uStack_260;
  uStack_26c = uStack_25c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_278);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_138 = 0x144;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd428);
  local_d0 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd5d8);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  local_d8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  plVar11 = param_1;
  uVar10 = param_2;
  FUN_140e87170(uVar7,DAT_141a0a728,0x80000000,&local_b8,param_1,param_2);
  uStack_26c = 6;
  local_278 = param_1;
  FUN_140e87440(&local_278,DAT_1419fe0e8,0x80000000,&local_228,
                (ulonglong)plVar11 & 0xffffffffffffff00,uVar10 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  plVar11 = param_1;
  uVar10 = param_2;
  FUN_140e87170(uVar7,DAT_1419fe0e8,0x80000000,&local_80,param_1,param_2);
  uStack_26c = 6;
  local_278 = param_1;
  FUN_140e87440(&local_278,DAT_1419fe158,0x80000000,&local_238,
                (ulonglong)plVar11 & 0xffffffffffffff00,uVar10 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  plVar11 = param_1;
  uVar10 = param_2;
  FUN_140e87170(uVar7,DAT_1419fe158,0x80000000,&local_90,param_1,param_2);
  FUN_140e87440(uVar7,DAT_1419f5ef8,0x80000000,&local_a0,(ulonglong)plVar11 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  local_278 = (longlong *)local_b8;
  uStack_270 = uStack_b0;
  uStack_26c = uStack_ac;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_278);
  local_128 = &local_1f8;
  local_120 = &local_c8;
  uStack_25c = local_21c;
  uStack_260 = local_220;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
    local_268 = local_228;
  }
  else {
    FUN_1400419b0(&local_268,&local_228);
  }
  FUN_1400460e0(&local_268,&local_80);
  uStack_26c = uStack_25c;
  uStack_270 = uStack_260;
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
    local_278 = (longlong *)local_268;
  }
  else {
    FUN_1400419b0(&local_278,&local_268);
  }
  FUN_1400460e0(&local_278,uVar3);
  local_218 = local_278;
  uStack_210 = (char *)CONCAT44(uStack_26c,uStack_270);
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_218);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_118 = &local_1d8;
  uStack_25c = local_22c;
  uStack_260 = local_230;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) == 0) {
    local_268 = local_238;
  }
  else {
    FUN_1400419b0(&local_268,&local_238);
  }
  FUN_1400460e0(&local_268,&local_90);
  uStack_26c = uStack_25c;
  uStack_270 = uStack_260;
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
    local_278 = (longlong *)local_268;
  }
  else {
    FUN_1400419b0(&local_278,&local_268);
  }
  FUN_1400460e0(&local_278,local_d0);
  local_218 = local_278;
  uStack_210 = (char *)CONCAT44(uStack_26c,uStack_270);
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_218);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_110 = local_1c8;
  uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_270 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
    local_278 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_278,puVar4);
  }
  FUN_140042560(&local_278,&local_a0);
  local_218 = local_278;
  uStack_210 = (char *)CONCAT44(uStack_26c,uStack_270);
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_218);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_108 = local_1b8;
  if (puVar5 != &local_1a8) {
    local_218 = (undefined8 *)*puVar5;
    uStack_210 = (char *)puVar5[1];
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_218);
  }
  local_100 = &local_1a8;
  if (local_d8 != &local_198) {
    local_218 = (undefined8 *)*local_d8;
    uStack_210 = (char *)local_d8[1];
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_218);
  }
  local_f8 = &local_198;
  local_218 = (undefined8 *)CONCAT44(uRam00000001419ed064,_DAT_1419ed060);
  uStack_210 = (char *)CONCAT44(uRam00000001419ed06c,uRam00000001419ed068);
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_218);
  local_f0 = local_188;
  local_218 = (undefined8 *)CONCAT44(uRam00000001419ecfc4,_DAT_1419ecfc0);
  uStack_210 = (char *)CONCAT44(uRam00000001419ecfcc,uRam00000001419ecfc8);
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_218);
  local_e8 = local_178;
  FUN_1403ae470(param_1,param_2,&local_258,9,&local_128);
  local_138 = 0x146;
  uStack_26c = 0;
  local_278 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(local_a8,&local_278,DAT_141955260,1);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if (0 < iVar2) {
    local_138 = 0x148;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419ffbb8);
    uStack_210 = "gml_Script_pal_swap_reset";
    local_218 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_218;
    local_24c = 5;
    local_258 = 0;
    local_208 = 0x71;
    iVar2 = FUN_140ec9d80();
    if (iVar2 != -1) {
      local_208 = 0x71;
      FUN_140ec9dc0();
    }
    DAT_141dc7a50 = local_218;
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(&local_1f8,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

