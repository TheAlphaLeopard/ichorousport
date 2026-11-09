// gml_Script_anon_86_gml_Object_oCutsceneGameIntro_Create_0 @ 0x1408de590

void gml_Script_anon_86_gml_Object_oCutsceneGameIntro_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffe10;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong local_1a8;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_174;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_res18 = 0;
  local_190 = "gml_Object_oCutsceneBlood_Step_0";
  local_188 = 0;
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  pcVar8 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_168,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_188 = 3;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd5a8);
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f290);
  puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
  uStack_1dc = 6;
  local_1e8 = local_res8;
  in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_108,uVar9,in_stack_fffffffffffffe10);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e609c0(local_res8);
  local_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_1b0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
    local_1b8 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_1b8,puVar5);
  }
  local_res18 = 1;
  FUN_1400462a0(&local_1b8,&local_108);
  uStack_1dc = local_1ac;
  uStack_1e0 = local_1b0;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_1b8;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_1b8);
  }
  local_res18 = 3;
  FUN_140046500(&local_1e8,uVar6);
  if (&local_1e8 != puVar7) {
    local_1d8 = (undefined4)local_1e8;
    uStack_1d4 = local_1e8._4_4_;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = uStack_1dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1d8);
  }
  local_res18 = 1;
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_res18 = 0;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e60910(1);
  local_188 = 4;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd408);
  puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
  uStack_1dc = 6;
  local_1e8 = local_res8;
  in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_118,uVar9,in_stack_fffffffffffffe10);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e609c0(local_res8);
  local_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_1b0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
    local_1b8 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_1b8,puVar5);
  }
  local_res18 = 4;
  FUN_1400462a0(&local_1b8,&local_118);
  uStack_1dc = local_1ac;
  uStack_1e0 = local_1b0;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_1b8;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_1b8);
  }
  local_res18 = 0xc;
  FUN_140046500(&local_1e8,uVar6);
  if (&local_1e8 != puVar7) {
    local_1d8 = (undefined4)local_1e8;
    uStack_1d4 = local_1e8._4_4_;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = uStack_1dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1d8);
  }
  local_res18 = 4;
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_res18 = 0;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e60910(1);
  local_188 = 6;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
  uStack_1dc = 6;
  local_1e8 = local_res8;
  in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_e8,uVar9,in_stack_fffffffffffffe10);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_1e0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_1e8,puVar5);
  }
  local_res18 = 0x10;
  FUN_140042560(&local_1e8,uVar4);
  FUN_1400460e0(&local_e8,&local_1e8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_e8);
  local_188 = 7;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
  uStack_1dc = 6;
  local_1e8 = local_res8;
  in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_f8,uVar9,in_stack_fffffffffffffe10);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_1e0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_1e8,puVar5);
  }
  local_res18 = 0x20;
  FUN_140042560(&local_1e8,uVar4);
  FUN_1400460e0(&local_f8,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_f8);
  local_188 = 9;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b48);
  uStack_1dc = 0;
  local_1e8 = (longlong *)0x3ff0000000000000;
  uVar2 = FUN_140e851f0(uVar6,&local_1e8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (uVar2 < 0x80000000) {
    local_188 = 0xb;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f290);
    uStack_1dc = 6;
    local_1e8 = local_res8;
    in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_108,uVar9,in_stack_fffffffffffffe10);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = 6;
    local_1e8 = local_res8;
    in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_118,uVar9,in_stack_fffffffffffffe10);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = 6;
    local_1e8 = local_res8;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_141a1b910,0x80000000,&local_128,uVar9,
                  in_stack_fffffffffffffe10 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1d8 = (undefined4)local_108;
    uStack_1d4 = local_108._4_4_;
    uStack_1d0 = uStack_100;
    uStack_1cc = uStack_fc;
    if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1d8);
    local_b8 = local_168;
    local_1d8 = (undefined4)local_118;
    uStack_1d4 = local_118._4_4_;
    uStack_1d0 = uStack_110;
    uStack_1cc = uStack_10c;
    if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1d8);
    local_b0 = local_158;
    local_1d8 = (undefined4)local_128;
    uStack_1d4 = local_128._4_4_;
    uStack_1d0 = uStack_120;
    uStack_1cc = uStack_11c;
    if ((1 << ((byte)_local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1d8);
    local_a8 = local_148;
    uStack_1dc = 0xf;
    local_1e8 = (longlong *)0x100000000000017;
    local_1d8 = 0x17;
    uStack_1d4 = 0x1000000;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = 0xf;
    if ((1 << ((byte)_local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1d8);
    local_a0 = local_138;
    ppuVar11 = &local_b8;
    uVar9 = CONCAT44(uVar10,DAT_141a0a7c8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_1c8,4,uVar9,ppuVar11);
    iVar3 = FUN_140e63cb0(local_98,&local_res8,&local_res10,uVar6);
    if (0 < iVar3) {
      do {
        local_188 = 0xd;
        uStack_1dc = 0xf;
        local_1e8 = (longlong *)0x100000100000045;
        local_1d8 = 0x45;
        uStack_1d4 = 0x1000001;
        uStack_1d0 = uStack_1e0;
        uStack_1cc = 0xf;
        if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_180);
        }
        FUN_140041b80(&local_180,&local_1d8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_180);
        local_188 = 0xe;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f5a0);
        uVar6 = FUN_140e794b0(0x47ae147b,0x9999999a);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = uVar6;
        local_188 = 0xf;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3fa999999999999a;
        cVar1 = FUN_140e643f0(local_98,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_98,&local_res8,&local_res10);
    local_188 = 0x13;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uStack_1dc = 6;
    local_1e8 = local_res8;
    uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419fded8,0x80000000,&local_c8,uVar9,uVar12);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = 6;
    local_1e8 = local_res8;
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419fdd18,0x80000000,&local_d8,uVar9,uVar12);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = 6;
    local_1e8 = local_res8;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_141a1b910,0x80000000,&local_128,uVar9,uVar12 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1d8 = (undefined4)local_c8;
    uStack_1d4 = local_c8._4_4_;
    uStack_1d0 = uStack_c0;
    uStack_1cc = uStack_bc;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1d8);
    local_b8 = local_168;
    local_1d8 = (undefined4)local_d8;
    uStack_1d4 = local_d8._4_4_;
    uStack_1d0 = uStack_d0;
    uStack_1cc = uStack_cc;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1d8);
    local_b0 = local_158;
    local_1d8 = (undefined4)local_128;
    uStack_1d4 = local_128._4_4_;
    uStack_1d0 = uStack_120;
    uStack_1cc = uStack_11c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1d8);
    local_a8 = local_148;
    uStack_1dc = 0xf;
    local_1e8 = (longlong *)0x100000000000017;
    local_1d8 = 0x17;
    uStack_1d4 = 0x1000000;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = 0xf;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1d8);
    local_a0 = local_138;
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_1c8,4,CONCAT44(uVar10,DAT_141a0a7c8),
                          &local_b8);
    iVar3 = FUN_140e63cb0(&local_1b8,&local_res8,&local_res10,uVar6);
    if (0 < iVar3) {
      do {
        local_188 = 0x15;
        uStack_1dc = 0xf;
        local_1e8 = (longlong *)0x100000100000045;
        local_1d8 = 0x45;
        uStack_1d4 = 0x1000001;
        uStack_1d0 = uStack_1e0;
        uStack_1cc = 0xf;
        if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_180);
        }
        FUN_140041b80(&local_180,&local_1d8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_180);
        local_188 = 0x16;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f5a0);
        uVar6 = FUN_140e794b0(0x47ae147b,0x9999999a);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = uVar6;
        local_188 = 0x17;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3fa999999999999a;
        cVar1 = FUN_140e643f0(&local_1b8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(&local_1b8,&local_res8,&local_res10);
    local_188 = 0x1a;
    puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a01b48);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
    if (local_1a8 != 0) {
      FUN_140e4cd60();
      local_1a8 = 0;
    }
    if (local_88 != 0) {
      FUN_140e4cd60();
    }
  }
  local_188 = 0x1d;
  uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a01b48);
  uStack_1dc = 0;
  local_1e8 = (longlong *)0x3ff0000000000000;
  local_res18 = 0x40;
  FUN_140042560(&local_1e8,uVar4);
  FUN_1400460e0(uVar6,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_168,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return;
}

