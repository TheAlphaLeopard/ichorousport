// gml_Object_oParPickup_Step_0 @ 0x140bb64e0

undefined8 * gml_Object_oParPickup_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  ulonglong uVar9;
  ulonglong in_stack_fffffffffffffe00;
  ulonglong uVar10;
  undefined1 **ppuVar11;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  uint local_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  longlong *local_150;
  undefined4 local_144;
  longlong *local_140;
  undefined4 local_134;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  
  local_160 = "gml_Script_anon@744@gml_Object_oParPickup_Create_0";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 0x33;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_128,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  uStack_1ac = 0xffffff;
  local_1b8 = (longlong *)0x0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_16c = 0xffffff;
  local_178 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 0x35;
  local_58 = uVar3;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  if (puVar4 != &local_b8) {
    local_1a8 = (longlong *)*puVar4;
    uStack_1a0 = *(undefined4 *)(puVar4 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_1a8);
  }
  local_158 = 0x37;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uStack_1ec = 6;
  in_stack_fffffffffffffe00 = in_stack_fffffffffffffe00 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  local_1f8 = param_1;
  FUN_140e87440(&local_1f8,DAT_1419fe0e8,0x80000000,&local_198,uVar9,in_stack_fffffffffffffe00);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  uStack_1ec = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_1f8 = param_1;
  FUN_140e87440(&local_1f8,DAT_1419fe158,0x80000000,&local_1b8,uVar9,
                in_stack_fffffffffffffe00 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  uStack_1ec = uStack_18c;
  uStack_1f0 = uStack_190;
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
    local_1f8 = local_198;
  }
  else {
    FUN_1400419b0(&local_1f8,&local_198);
  }
  FUN_1400460e0(&local_1f8,&local_b8);
  local_1a8 = local_1f8;
  uStack_1a0 = uStack_1f0;
  uStack_19c = uStack_1ec;
  if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1a8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1a8 = local_1b8;
  uStack_1a0 = uStack_1b0;
  uStack_19c = uStack_1ac;
  local_88 = local_128;
  if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1a8);
  local_80 = local_118;
  uStack_1dc = 0xf;
  local_1e8 = (longlong *)0x100000000000149;
  local_1a8 = (longlong *)0x100000000000149;
  uStack_1a0 = uStack_1e0;
  uStack_19c = 0xf;
  if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1a8);
  local_78 = local_108;
  ppuVar11 = &local_88;
  uVar9 = CONCAT44(uVar7,DAT_141a12628);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_1d8,3,uVar9,ppuVar11);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_158 = 0x39;
    if ((local_ac & 0xffffff) == 0) {
      uVar7 = (undefined4)local_b8;
    }
    else {
      uVar7 = FUN_140e4b060(&local_b8);
    }
    uVar3 = FUN_140e79500(uVar7);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_17c = 0;
    local_158 = 0x3a;
    local_188 = uVar3;
    while( true ) {
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      local_144 = 6;
      uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_150 = param_1;
      FUN_140e87440(&local_150,DAT_1419fe0e8,0x80000000,&local_198,uVar9,uVar10);
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      local_134 = 6;
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_140 = param_1;
      FUN_140e87440(&local_140,DAT_1419fe158,0x80000000,&local_1b8,uVar9,uVar10 & 0xffffffffffffff00
                   );
      uVar7 = (undefined4)(uVar9 >> 0x20);
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      uStack_1ec = uStack_18c;
      uStack_1f0 = uStack_190;
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
        local_1f8 = local_198;
      }
      else {
        FUN_1400419b0(&local_1f8,&local_198);
      }
      FUN_1400460e0(&local_1f8,&local_188);
      local_1c8 = (undefined4)local_1f8;
      uStack_1c4 = local_1f8._4_4_;
      uStack_1c0 = uStack_1f0;
      uStack_1bc = uStack_1ec;
      if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_1c8);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1c8 = (undefined4)local_1b8;
      uStack_1c4 = local_1b8._4_4_;
      uStack_1c0 = uStack_1b0;
      uStack_1bc = uStack_1ac;
      local_88 = local_128;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_1c8);
      local_80 = local_118;
      uStack_19c = 0xf;
      local_1a8 = (longlong *)0x100000000000149;
      local_1c8 = 0x149;
      uStack_1c4 = 0x1000000;
      uStack_1c0 = uStack_1a0;
      uStack_1bc = 0xf;
      if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_1c8);
      local_78 = local_108;
      ppuVar11 = &local_88;
      uVar9 = CONCAT44(uVar7,DAT_141a12628);
      uVar3 = FUN_140e634e0(param_1,param_2,&local_1d8,3,uVar9,ppuVar11);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') break;
      local_158 = 0x3c;
      uStack_1dc = 6;
      ppuVar11 = (undefined1 **)((ulonglong)ppuVar11 & 0xffffffffffffff00);
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_1e8 = param_1;
      FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_98,uVar9,ppuVar11);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_1400460e0(&local_98,&local_188);
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_98);
    }
    local_158 = 0x3e;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    uVar3 = local_58;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  local_158 = 0x41;
  uStack_1dc = 6;
  uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_98,uVar9,uVar10);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_1f0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_1f8 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_1f8,puVar4);
  }
  FUN_140042560(&local_1f8,uVar3);
  FUN_1400460e0(&local_98,&local_1f8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_98);
  local_158 = 0x43;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  if (puVar4 != &local_178) {
    local_1c8 = *(undefined4 *)puVar4;
    uStack_1c4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1c0 = *(undefined4 *)(puVar4 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1c8);
  }
  local_158 = 0x45;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uStack_1dc = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_198,uVar9,uVar10);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_1b8,uVar9,uVar10 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1c8 = (undefined4)local_198;
  uStack_1c4 = local_198._4_4_;
  uStack_1c0 = uStack_190;
  uStack_1bc = uStack_18c;
  if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1c8);
  uStack_1ec = uStack_1ac;
  uStack_1f0 = uStack_1b0;
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
    local_1f8 = local_1b8;
    local_88 = local_128;
  }
  else {
    local_88 = local_128;
    FUN_1400419b0(&local_1f8,&local_1b8);
  }
  FUN_1400460e0(&local_1f8,&local_178);
  local_1c8 = (undefined4)local_1f8;
  uStack_1c4 = local_1f8._4_4_;
  uStack_1c0 = uStack_1f0;
  uStack_1bc = uStack_1ec;
  if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1c8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_80 = local_118;
  uStack_19c = 0xf;
  local_1a8 = (longlong *)0x100000000000149;
  local_1c8 = 0x149;
  uStack_1c4 = 0x1000000;
  uStack_1c0 = uStack_1a0;
  uStack_1bc = 0xf;
  if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1c8);
  local_78 = local_108;
  ppuVar11 = &local_88;
  uVar9 = CONCAT44(uVar7,DAT_141a12628);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_1d8,3,uVar9,ppuVar11);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_158 = 0x47;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    if ((local_16c & 0xffffff) == 0) {
      uVar7 = (undefined4)local_178;
    }
    else {
      uVar7 = FUN_140e4b060(&local_178);
    }
    uVar3 = FUN_140e79500(uVar7);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_17c = 0;
    local_158 = 0x48;
    local_188 = uVar3;
    while( true ) {
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      uStack_1dc = 6;
      uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_1e8 = param_1;
      FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_198,uVar9,uVar10);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_134 = 6;
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_140 = param_1;
      FUN_140e87440(&local_140,DAT_1419fe158,0x80000000,&local_1b8,uVar9,uVar10 & 0xffffffffffffff00
                   );
      uVar7 = (undefined4)(uVar9 >> 0x20);
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      local_1c8 = (undefined4)local_198;
      uStack_1c4 = local_198._4_4_;
      uStack_1c0 = uStack_190;
      uStack_1bc = uStack_18c;
      if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_1c8);
      uStack_1ec = uStack_1ac;
      uStack_1f0 = uStack_1b0;
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
        local_1f8 = local_1b8;
        local_88 = local_128;
      }
      else {
        local_88 = local_128;
        FUN_1400419b0(&local_1f8,&local_1b8);
      }
      FUN_1400460e0(&local_1f8,&local_188);
      local_1c8 = (undefined4)local_1f8;
      uStack_1c4 = local_1f8._4_4_;
      uStack_1c0 = uStack_1f0;
      uStack_1bc = uStack_1ec;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_1c8);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_80 = local_118;
      uStack_19c = 0xf;
      local_1a8 = (longlong *)0x100000000000149;
      local_1c8 = 0x149;
      uStack_1c4 = 0x1000000;
      uStack_1c0 = uStack_1a0;
      uStack_1bc = 0xf;
      if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_1c8);
      local_78 = local_108;
      ppuVar11 = &local_88;
      uVar9 = CONCAT44(uVar7,DAT_141a12628);
      uVar3 = FUN_140e634e0(param_1,param_2,&local_1d8,3,uVar9,ppuVar11);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') break;
      local_158 = 0x4a;
      local_144 = 6;
      ppuVar11 = (undefined1 **)((ulonglong)ppuVar11 & 0xffffffffffffff00);
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_150 = param_1;
      FUN_140e87440(&local_150,DAT_1419fe158,0x80000000,&local_c8,uVar9,ppuVar11);
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      FUN_1400460e0(&local_c8,&local_188);
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_c8);
    }
    local_158 = 0x4c;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    uVar3 = local_58;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  local_158 = 0x4f;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uStack_1dc = 6;
  uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_198,uVar9,uVar10);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_1b8,uVar9,uVar10 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1c8 = (undefined4)local_198;
  uStack_1c4 = local_198._4_4_;
  uStack_1c0 = uStack_190;
  uStack_1bc = uStack_18c;
  if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1c8);
  uStack_1ec = uStack_1ac;
  uStack_1f0 = uStack_1b0;
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
    local_1f8 = local_1b8;
    local_88 = local_128;
  }
  else {
    local_88 = local_128;
    FUN_1400419b0(&local_1f8,&local_1b8);
  }
  FUN_1400460e0(&local_1f8,&local_178);
  local_1c8 = (undefined4)local_1f8;
  uStack_1c4 = local_1f8._4_4_;
  uStack_1c0 = uStack_1f0;
  uStack_1bc = uStack_1ec;
  if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1c8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_80 = local_118;
  uStack_19c = 0xf;
  local_1a8 = (longlong *)0x1000000000000ea;
  local_1c8 = 0xea;
  uStack_1c4 = 0x1000000;
  uStack_1c0 = uStack_1a0;
  uStack_1bc = 0xf;
  if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1c8);
  local_78 = local_108;
  ppuVar11 = &local_88;
  uVar9 = CONCAT44(uVar7,DAT_141a12628);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_1d8,3,uVar9,ppuVar11);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uStack_1dc = 6;
    uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_1e8 = param_1;
    FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_198,uVar9,uVar10);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = 6;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_1e8 = param_1;
    FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_1b8,uVar9,uVar10 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1c8 = (undefined4)local_198;
    uStack_1c4 = local_198._4_4_;
    uStack_1c0 = uStack_190;
    uStack_1bc = uStack_18c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1c8);
    local_70 = local_f8;
    local_1c8 = (undefined4)local_1b8;
    uStack_1c4 = local_1b8._4_4_;
    uStack_1c0 = uStack_1b0;
    uStack_1bc = uStack_1ac;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1c8);
    local_68 = local_e8;
    uStack_19c = 0xf;
    local_1a8 = (longlong *)0x1000000000000ea;
    local_1c8 = 0xea;
    uStack_1c4 = 0x1000000;
    uStack_1c0 = uStack_1a0;
    uStack_1bc = 0xf;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1c8);
    local_60 = local_d8;
    ppuVar11 = &local_70;
    uVar9 = CONCAT44(uVar7,DAT_141a12628);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_a8,3,uVar9,ppuVar11);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
      iVar2 = FUN_140e851f0(puVar4,uVar5,DAT_141955260,1);
      if ((iVar2 != -2) && (-1 < iVar2)) {
        local_158 = 0x51;
        if ((local_16c & 0xffffff) == 0) {
          uVar7 = (undefined4)local_178;
        }
        else {
          uVar7 = FUN_140e4b060(&local_178);
        }
        uVar5 = FUN_140e79500(uVar7);
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_17c = 0;
        local_158 = 0x52;
        local_188 = uVar5;
        while( true ) {
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1d8 = 0;
          local_1d0 = 0;
          local_1cc = 5;
          uStack_1dc = 6;
          uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
          uVar9 = uVar9 & 0xffffffffffffff00;
          local_1e8 = param_1;
          FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_198,uVar9,uVar10);
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          local_134 = 6;
          uVar9 = uVar9 & 0xffffffffffffff00;
          local_140 = param_1;
          FUN_140e87440(&local_140,DAT_1419fe158,0x80000000,&local_1b8,uVar9,
                        uVar10 & 0xffffffffffffff00);
          uVar7 = (undefined4)(uVar9 >> 0x20);
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_140);
          }
          local_1c8 = (undefined4)local_198;
          uStack_1c4 = local_198._4_4_;
          uStack_1c0 = uStack_190;
          uStack_1bc = uStack_18c;
          if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_128);
          }
          FUN_140041b80(local_128,&local_1c8);
          uStack_1ec = uStack_1ac;
          uStack_1f0 = uStack_1b0;
          if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
            local_1f8 = local_1b8;
            local_88 = local_128;
          }
          else {
            local_88 = local_128;
            FUN_1400419b0(&local_1f8,&local_1b8);
          }
          FUN_1400460e0(&local_1f8,&local_188);
          local_1c8 = (undefined4)local_1f8;
          uStack_1c4 = local_1f8._4_4_;
          uStack_1c0 = uStack_1f0;
          uStack_1bc = uStack_1ec;
          if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_118);
          }
          FUN_140041b80(local_118,&local_1c8);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_80 = local_118;
          uStack_19c = 0xf;
          local_1a8 = (longlong *)0x1000000000000ea;
          local_1c8 = 0xea;
          uStack_1c4 = 0x1000000;
          uStack_1c0 = uStack_1a0;
          uStack_1bc = 0xf;
          if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_1c8);
          local_78 = local_108;
          ppuVar11 = &local_88;
          uVar9 = CONCAT44(uVar7,DAT_141a12628);
          uVar5 = FUN_140e634e0(param_1,param_2,&local_1d8,3,uVar9,ppuVar11);
          cVar1 = FUN_140e491e0(uVar5);
          if (cVar1 != '\0') break;
          local_158 = 0x54;
          local_144 = 6;
          ppuVar11 = (undefined1 **)((ulonglong)ppuVar11 & 0xffffffffffffff00);
          uVar9 = uVar9 & 0xffffffffffffff00;
          local_150 = param_1;
          FUN_140e87440(&local_150,DAT_1419fe158,0x80000000,&local_c8,uVar9,ppuVar11);
          if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_150);
          }
          FUN_1400460e0(&local_c8,&local_188);
          FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_c8);
        }
        local_158 = 0x56;
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = 0;
      }
    }
  }
  local_158 = 0x59;
  uStack_1dc = 6;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_c8,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar11 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_1f0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_1f8 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_1f8,puVar4);
  }
  FUN_140042560(&local_1f8,uVar3);
  FUN_1400460e0(&local_c8,&local_1f8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_c8);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

