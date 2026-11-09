// gml_Object_oBossPestHead_Step_0 @ 0x1407b1060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBossPestHead_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar11;
  uint **ppuVar10;
  ulonglong in_stack_fffffffffffffe10;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  uint **ppuVar14;
  undefined8 local_1e8;
  uint uStack_1e0;
  uint uStack_1dc;
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  uint local_158 [3];
  byte local_14c;
  uint local_148 [3];
  byte local_13c;
  uint local_138 [3];
  byte local_12c;
  uint local_128 [3];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  uint local_f8 [3];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  uint local_c8 [3];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  uint *local_88;
  uint *local_80;
  uint *local_78;
  uint *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  uint *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  uint *local_40;
  undefined1 *local_38;
  
  local_a0 = "gml_Script_anon@2132@___struct___367@gml_Object_oBossPestHead_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x8b;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_158,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_17c = 0;
  local_188 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x8c;
  puVar3 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08cf8);
  uStack_1dc = 6;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_1a8,uVar9,
                in_stack_fffffffffffffe10 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = (longlong *)local_1a8;
  uStack_1e0 = uStack_1a0;
  uStack_1dc = uStack_19c;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1e8);
  local_88 = local_158;
  if (puVar3 != local_148) {
    local_1e8 = *(longlong **)puVar3;
    uStack_1e0 = puVar3[2];
    uStack_1dc = puVar3[3];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1e8);
  }
  local_80 = local_148;
  local_1e8 = (longlong *)CONCAT44(uRam00000001419e8504,_DAT_1419e8500);
  uStack_1e0 = uRam00000001419e8508;
  uStack_1dc = uRam00000001419e850c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1e8);
  local_78 = local_138;
  ppuVar12 = (undefined8 **)&local_88;
  uVar9 = CONCAT44(uVar11,DAT_141a00c58);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,3,uVar9,ppuVar12);
  if (puVar4 != &local_168) {
    local_1e8 = (longlong *)*puVar4;
    uStack_1e0 = *(uint *)(puVar4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1e8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_168);
  local_98 = 0x8d;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  puVar5 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08d88);
  uStack_1dc = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_1b8,uVar9,
                (ulonglong)ppuVar12 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = (longlong *)local_1b8;
  uStack_1e0 = uStack_1b0;
  uStack_1dc = uStack_1ac;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1e8);
  local_88 = local_158;
  if (puVar5 != local_148) {
    local_1e8 = *(longlong **)puVar5;
    uStack_1e0 = puVar5[2];
    uStack_1dc = puVar5[3];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1e8);
  }
  local_80 = local_148;
  local_1e8 = (longlong *)CONCAT44(uRam00000001419e8504,_DAT_1419e8500);
  uStack_1e0 = uRam00000001419e8508;
  uStack_1dc = uRam00000001419e850c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1e8);
  local_78 = local_138;
  ppuVar12 = (undefined8 **)&local_88;
  uVar9 = CONCAT44(uVar11,DAT_141a00c58);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,3,uVar9,ppuVar12);
  if (puVar4 != &local_178) {
    local_1e8 = (longlong *)*puVar4;
    uStack_1e0 = *(uint *)(puVar4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1e8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_178);
  local_98 = 0x8f;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uStack_1dc = 6;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_1a8,uVar9,uVar13);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_1b8,uVar9,uVar13 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = (longlong *)local_1a8;
  uStack_1e0 = uStack_1a0;
  uStack_1dc = uStack_19c;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1e8);
  local_88 = local_158;
  local_1e8 = (longlong *)local_1b8;
  uStack_1e0 = uStack_1b0;
  uStack_1dc = uStack_1ac;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1e8);
  local_80 = local_148;
  uStack_1dc = 0xf;
  local_1e8 = (longlong *)0x1000000000000ee;
  local_1d8 = 0xee;
  uStack_1d4 = 0x1000000;
  uStack_1d0 = uStack_1e0;
  uStack_1cc = 0xf;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1d8);
  local_78 = local_138;
  ppuVar14 = &local_88;
  ppuVar10 = (uint **)CONCAT44(uVar11,DAT_141a12628);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_1c8,3,ppuVar10,ppuVar14);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    local_98 = 0x91;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    puVar7 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    uStack_1dc = 6;
    uVar13 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    local_1e8 = param_1;
    FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_1a8,uVar9,uVar13);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = 6;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_1e8 = param_1;
    FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_1b8,uVar9,uVar13 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1d8 = DAT_141a575a0 & 0xffffff;
    uStack_1d4 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
    if (uStack_1d4 == 0xf) {
      uStack_1d4 = 0x4000004;
    }
    else {
      uStack_1d4 = uStack_1d4 | 0x1000000;
    }
    uStack_1dc = 0xf;
    local_1e8 = (longlong *)(CONCAT44(uStack_1d4,DAT_141a575a0) & 0xffffffff00ffffff);
    uStack_1d0 = uStack_1e0;
    uStack_1cc = 0xf;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1d8);
    local_70 = local_128;
    local_1d8 = (uint)local_1a8;
    uStack_1d4 = local_1a8._4_4_;
    uStack_1d0 = uStack_1a0;
    uStack_1cc = uStack_19c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1d8);
    local_1d8 = (uint)local_1b8;
    uStack_1d4 = local_1b8._4_4_;
    uStack_1d0 = uStack_1b0;
    uStack_1cc = uStack_1ac;
    local_68 = local_118;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1d8);
    local_60 = local_108;
    if (puVar7 != local_f8) {
      local_1d8 = *puVar7;
      uStack_1d4 = puVar7[1];
      uStack_1d0 = puVar7[2];
      uStack_1cc = puVar7[3];
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1d8);
    }
    local_58 = local_f8;
    uStack_1dc = 0xf;
    local_1e8 = (longlong *)0x1000000000000ee;
    local_1d8 = 0xee;
    uStack_1d4 = 0x1000000;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = 0xf;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1d8);
    local_50 = local_e8;
    local_1d8 = _DAT_1419e84f0;
    uStack_1d4 = uRam00000001419e84f4;
    uStack_1d0 = uRam00000001419e84f8;
    uStack_1cc = uRam00000001419e84fc;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1d8);
    local_48 = local_d8;
    ppuVar14 = &local_70;
    puVar7 = (uint *)FUN_140e634e0(param_1,param_2,&local_198,6,CONCAT44(uVar11,DAT_1419fd6d8),
                                   ppuVar14);
    if (puVar7 != local_c8) {
      local_1d8 = *puVar7;
      uStack_1d4 = puVar7[1];
      uStack_1d0 = puVar7[2];
      uStack_1cc = puVar7[3];
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_1d8);
    }
    local_40 = local_c8;
    local_1d8 = (uint)DAT_1419df7b0;
    uStack_1d4 = DAT_1419df7b0._4_4_;
    uStack_1d0 = DAT_1419df7b8;
    uStack_1cc = DAT_1419df7bc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1d8);
    local_38 = local_b8;
    ppuVar10 = &local_40;
    gml_Script_draw_line_sprite(param_1,param_2,&local_188,2,ppuVar10);
  }
  local_98 = 0x95;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uStack_1dc = 6;
  uVar13 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_1a8,uVar9,uVar13);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_1b8,uVar9,uVar13 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1d8 = (uint)local_1a8;
  uStack_1d4 = local_1a8._4_4_;
  uStack_1d0 = uStack_1a0;
  uStack_1cc = uStack_19c;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1d8);
  local_88 = local_158;
  local_1d8 = (uint)local_1b8;
  uStack_1d4 = local_1b8._4_4_;
  uStack_1d0 = uStack_1b0;
  uStack_1cc = uStack_1ac;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1d8);
  local_80 = local_148;
  if (puVar3 != local_138) {
    local_1d8 = *puVar3;
    uStack_1d4 = puVar3[1];
    uStack_1d0 = puVar3[2];
    uStack_1cc = puVar3[3];
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1d8);
  }
  local_78 = local_138;
  if (puVar5 != local_128) {
    local_1d8 = *puVar5;
    uStack_1d4 = puVar5[1];
    uStack_1d0 = puVar5[2];
    uStack_1cc = puVar5[3];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1d8);
  }
  local_70 = local_128;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_1c8,4,CONCAT44(uVar11,DAT_1419fd548),&local_88);
  uStack_1dc = 0;
  local_1e8 = (longlong *)0x4000000000000000;
  iVar2 = FUN_140e851f0(uVar6,&local_1e8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (iVar2 != -2 && iVar2 < 0) {
    local_98 = 0x97;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a08cf8);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a08d88);
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  _eh_vector_destructor_iterator_(local_158,0x10,0xb,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

