// gml_Object_oTutorialFallIn_Step_0 @ 0x140df9aa0

undefined8 *
gml_Object_oTutorialFallIn_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffe60;
  ulonglong uVar9;
  undefined1 **ppuVar10;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  uint local_c4;
  undefined8 local_c0;
  uint local_b4;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  longlong *local_78;
  undefined4 local_6c;
  longlong *local_68;
  undefined4 local_5c;
  undefined8 local_58;
  
  local_e0 = "gml_Script_anon@378@gml_Object_oTutorialFallIn_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x14;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_128,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_b4 = 0xffffff;
  local_c0 = 0;
  uStack_13c = 0xffffff;
  local_148 = (longlong *)0x0;
  uStack_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x16;
  local_58 = uVar2;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  if (puVar3 != &local_c0) {
    local_138 = (longlong *)*puVar3;
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_138);
  }
  local_d8 = 0x18;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uStack_18c = 6;
  in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffffffffffff00;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_148,uVar8,in_stack_fffffffffffffe60);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_18c = 6;
  uVar8 = uVar8 & 0xffffffffffffff00;
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_158,uVar8,
                in_stack_fffffffffffffe60 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar8 >> 0x20);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_18c = uStack_13c;
  uStack_190 = uStack_140;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
    local_198 = local_148;
  }
  else {
    FUN_1400419b0(&local_198,&local_148);
  }
  FUN_1400460e0(&local_198,&local_c0);
  local_138 = local_198;
  uStack_130 = uStack_190;
  uStack_12c = uStack_18c;
  if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_138);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_b0 = local_128;
  local_138 = local_158;
  uStack_130 = uStack_150;
  uStack_12c = uStack_14c;
  if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_138);
  local_a8 = local_118;
  uStack_17c = 0xf;
  local_188 = (longlong *)0x100000000000149;
  local_138 = (longlong *)0x100000000000149;
  uStack_130 = uStack_180;
  uStack_12c = 0xf;
  if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_138);
  local_a0 = local_108;
  ppuVar10 = &local_b0;
  uVar8 = CONCAT44(uVar6,DAT_141a12628);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_178,3,uVar8,ppuVar10);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_d8 = 0x1a;
    if ((local_b4 & 0xffffff) == 0) {
      uVar6 = (undefined4)local_c0;
    }
    else {
      uVar6 = FUN_140e4b060(&local_c0);
    }
    uVar2 = FUN_140e79500(uVar6);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_ec = 0;
    local_d8 = 0x1b;
    local_f8 = uVar2;
    while( true ) {
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      local_6c = 6;
      uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      local_78 = param_1;
      FUN_140e87440(&local_78,DAT_1419fe0e8,0x80000000,&local_148,uVar8,uVar9);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      local_5c = 6;
      uVar8 = uVar8 & 0xffffffffffffff00;
      local_68 = param_1;
      FUN_140e87440(&local_68,DAT_1419fe158,0x80000000,&local_158,uVar8,uVar9 & 0xffffffffffffff00);
      uVar6 = (undefined4)(uVar8 >> 0x20);
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      uStack_18c = uStack_13c;
      uStack_190 = uStack_140;
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
        local_198 = local_148;
      }
      else {
        FUN_1400419b0(&local_198,&local_148);
      }
      FUN_1400460e0(&local_198,&local_f8);
      local_168 = (undefined4)local_198;
      uStack_164 = local_198._4_4_;
      uStack_160 = uStack_190;
      uStack_15c = uStack_18c;
      if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_168);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_b0 = local_128;
      local_168 = (undefined4)local_158;
      uStack_164 = local_158._4_4_;
      uStack_160 = uStack_150;
      uStack_15c = uStack_14c;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_168);
      local_a8 = local_118;
      uStack_12c = 0xf;
      local_138 = (longlong *)0x100000000000149;
      local_168 = 0x149;
      uStack_164 = 0x1000000;
      uStack_160 = uStack_130;
      uStack_15c = 0xf;
      if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_168);
      local_a0 = local_108;
      ppuVar10 = &local_b0;
      uVar8 = CONCAT44(uVar6,DAT_141a12628);
      uVar2 = FUN_140e634e0(param_1,param_2,&local_178,3,uVar8,ppuVar10);
      cVar1 = FUN_140e491e0(uVar2);
      if (cVar1 != '\0') break;
      local_d8 = 0x1d;
      uStack_17c = 6;
      ppuVar10 = (undefined1 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
      uVar8 = uVar8 & 0xffffffffffffff00;
      local_188 = param_1;
      FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_88,uVar8,ppuVar10);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_1400460e0(&local_88,&local_f8);
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_88);
    }
    local_d8 = 0x1f;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    uVar2 = local_58;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  local_d8 = 0x22;
  uStack_17c = 6;
  uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_88,uVar8,uVar9);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_18c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_190 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
    local_198 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_198,puVar3);
  }
  FUN_140042560(&local_198,uVar2);
  FUN_1400460e0(&local_88,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_88);
  local_d8 = 0x24;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  if (puVar3 != &local_d0) {
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    FUN_140041b80(&local_d0,&local_168);
  }
  local_d8 = 0x26;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uStack_17c = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_148,uVar8,uVar9);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 6;
  uVar8 = uVar8 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_158,uVar8,uVar9 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar8 >> 0x20);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_168 = (undefined4)local_148;
  uStack_164 = local_148._4_4_;
  uStack_160 = uStack_140;
  uStack_15c = uStack_13c;
  if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_168);
  local_b0 = local_128;
  uStack_18c = uStack_14c;
  uStack_190 = uStack_150;
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_198 = local_158;
  }
  else {
    FUN_1400419b0(&local_198,&local_158);
  }
  FUN_1400460e0(&local_198,&local_d0);
  local_168 = (undefined4)local_198;
  uStack_164 = local_198._4_4_;
  uStack_160 = uStack_190;
  uStack_15c = uStack_18c;
  if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_a8 = local_118;
  uStack_12c = 0xf;
  local_138 = (longlong *)0x100000000000149;
  local_168 = 0x149;
  uStack_164 = 0x1000000;
  uStack_160 = uStack_130;
  uStack_15c = 0xf;
  if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_168);
  local_a0 = local_108;
  ppuVar10 = &local_b0;
  uVar8 = CONCAT44(uVar6,DAT_141a12628);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_178,3,uVar8,ppuVar10);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_d8 = 0x28;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    if ((local_c4 & 0xffffff) == 0) {
      uVar6 = (undefined4)local_d0;
    }
    else {
      uVar6 = FUN_140e4b060(&local_d0);
    }
    uVar2 = FUN_140e79500(uVar6);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_ec = 0;
    local_d8 = 0x29;
    local_f8 = uVar2;
    while( true ) {
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      uStack_17c = 6;
      uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      local_188 = param_1;
      FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_148,uVar8,uVar9);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_5c = 6;
      uVar8 = uVar8 & 0xffffffffffffff00;
      local_68 = param_1;
      FUN_140e87440(&local_68,DAT_1419fe158,0x80000000,&local_158,uVar8,uVar9 & 0xffffffffffffff00);
      uVar6 = (undefined4)(uVar8 >> 0x20);
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      local_168 = (undefined4)local_148;
      uStack_164 = local_148._4_4_;
      uStack_160 = uStack_140;
      uStack_15c = uStack_13c;
      if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_168);
      local_b0 = local_128;
      uStack_18c = uStack_14c;
      uStack_190 = uStack_150;
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
        local_198 = local_158;
      }
      else {
        FUN_1400419b0(&local_198,&local_158);
      }
      FUN_1400460e0(&local_198,&local_f8);
      local_168 = (undefined4)local_198;
      uStack_164 = local_198._4_4_;
      uStack_160 = uStack_190;
      uStack_15c = uStack_18c;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_168);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_a8 = local_118;
      uStack_12c = 0xf;
      local_138 = (longlong *)0x100000000000149;
      local_168 = 0x149;
      uStack_164 = 0x1000000;
      uStack_160 = uStack_130;
      uStack_15c = 0xf;
      if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_168);
      local_a0 = local_108;
      ppuVar10 = &local_b0;
      uVar8 = CONCAT44(uVar6,DAT_141a12628);
      uVar2 = FUN_140e634e0(param_1,param_2,&local_178,3,uVar8,ppuVar10);
      cVar1 = FUN_140e491e0(uVar2);
      if (cVar1 != '\0') break;
      local_d8 = 0x2b;
      local_6c = 6;
      ppuVar10 = (undefined1 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
      uVar8 = uVar8 & 0xffffffffffffff00;
      local_78 = param_1;
      FUN_140e87440(&local_78,DAT_1419fe158,0x80000000,&local_98,uVar8,ppuVar10);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_1400460e0(&local_98,&local_f8);
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_98);
    }
    local_d8 = 0x2d;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    uVar2 = local_58;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  local_d8 = 0x30;
  uStack_17c = 6;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_98,uVar8 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_18c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_190 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
    local_198 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_198,puVar3);
  }
  FUN_140042560(&local_198,uVar2);
  FUN_1400460e0(&local_98,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_98);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

