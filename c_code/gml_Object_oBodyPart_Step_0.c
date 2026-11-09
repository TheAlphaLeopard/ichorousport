// gml_Object_oBodyPart_Step_0 @ 0x1406f1950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oBodyPart_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

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
  ulonglong in_stack_fffffffffffffe80;
  ulonglong uVar10;
  undefined1 **ppuVar11;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
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
  
  local_c0 = "gml_Script_anon@864@gml_Object_oBodyPart_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x2c;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_138,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  uStack_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_8c = 0xffffff;
  local_98 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x2e;
  local_58 = uVar3;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_16c = 6;
  in_stack_fffffffffffffe80 = in_stack_fffffffffffffe80 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_f8,uVar9,in_stack_fffffffffffffe80);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_16c = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_108,uVar9,
                in_stack_fffffffffffffe80 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_16c = uStack_ec;
  uStack_170 = uStack_f0;
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_178 = local_f8;
  }
  else {
    FUN_1400419b0(&local_178,&local_f8);
  }
  FUN_1400460e0(&local_178,puVar4);
  local_d8 = local_178;
  uStack_d0 = uStack_170;
  uStack_cc = uStack_16c;
  if ((1 << ((byte)_local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_d8);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_b0 = local_138;
  local_d8 = local_108;
  uStack_d0 = uStack_100;
  uStack_cc = uStack_fc;
  if ((1 << ((byte)_local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_d8);
  local_a8 = local_128;
  uStack_15c = 0xf;
  local_168 = (longlong *)0x100000000000149;
  local_d8 = (longlong *)0x100000000000149;
  uStack_d0 = uStack_160;
  uStack_cc = 0xf;
  if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_d8);
  local_a0 = local_118;
  ppuVar11 = &local_b0;
  uVar9 = CONCAT44(uVar7,DAT_141a12628);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_158,3,uVar9,ppuVar11);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_b8 = 0x30;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar7 = (undefined4)*puVar4;
    }
    else {
      uVar7 = FUN_140e4b060(puVar4);
    }
    uVar3 = FUN_140e79500(uVar7);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_dc = 0;
    local_b8 = 0x31;
    local_e8 = uVar3;
    while( true ) {
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      local_6c = 6;
      uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_78 = param_1;
      FUN_140e87440(&local_78,DAT_1419fe0e8,0x80000000,&local_f8,uVar9,uVar10);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      local_5c = 6;
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_68 = param_1;
      FUN_140e87440(&local_68,DAT_1419fe158,0x80000000,&local_108,uVar9,uVar10 & 0xffffffffffffff00)
      ;
      uVar7 = (undefined4)(uVar9 >> 0x20);
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      uStack_16c = uStack_ec;
      uStack_170 = uStack_f0;
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
        local_178 = local_f8;
      }
      else {
        FUN_1400419b0(&local_178,&local_f8);
      }
      FUN_1400460e0(&local_178,&local_e8);
      local_148 = (undefined4)local_178;
      uStack_144 = local_178._4_4_;
      uStack_140 = uStack_170;
      uStack_13c = uStack_16c;
      if ((1 << ((byte)_local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_148);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_b0 = local_138;
      local_148 = (undefined4)local_108;
      uStack_144 = local_108._4_4_;
      uStack_140 = uStack_100;
      uStack_13c = uStack_fc;
      if ((1 << ((byte)_local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_148);
      local_a8 = local_128;
      uStack_cc = 0xf;
      local_d8 = (longlong *)0x100000000000149;
      local_148 = 0x149;
      uStack_144 = 0x1000000;
      uStack_140 = uStack_d0;
      uStack_13c = 0xf;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_148);
      local_a0 = local_118;
      ppuVar11 = &local_b0;
      uVar9 = CONCAT44(uVar7,DAT_141a12628);
      uVar3 = FUN_140e634e0(param_1,param_2,&local_158,3,uVar9,ppuVar11);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') break;
      local_b8 = 0x33;
      uStack_15c = 6;
      ppuVar11 = (undefined1 **)((ulonglong)ppuVar11 & 0xffffffffffffff00);
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_88,uVar9,ppuVar11);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_1400460e0(&local_88,&local_e8);
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_88);
    }
    local_b8 = 0x35;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    uStack_15c = 0;
    local_168 = (longlong *)0xbfe8000000000000;
    FUN_140042560(uVar3,&local_168);
    uVar3 = local_58;
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
  }
  local_b8 = 0x3b;
  uStack_15c = 6;
  uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_88,uVar9,uVar10);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_170 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_178,puVar4);
  }
  FUN_140042560(&local_178,uVar3);
  FUN_1400460e0(&local_88,&local_178);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_88);
  local_b8 = 0x3d;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_15c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_f8,uVar9,uVar10);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_15c = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_108,uVar9,uVar10 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_148 = (undefined4)local_f8;
  uStack_144 = local_f8._4_4_;
  uStack_140 = uStack_f0;
  uStack_13c = uStack_ec;
  if ((1 << ((byte)_local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_148);
  local_b0 = local_138;
  uStack_16c = uStack_fc;
  uStack_170 = uStack_100;
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_178 = local_108;
  }
  else {
    FUN_1400419b0(&local_178,&local_108);
  }
  FUN_1400460e0(&local_178,puVar4);
  local_148 = (undefined4)local_178;
  uStack_144 = local_178._4_4_;
  uStack_140 = uStack_170;
  uStack_13c = uStack_16c;
  if ((1 << ((byte)_local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_148);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_a8 = local_128;
  uStack_cc = 0xf;
  local_d8 = (longlong *)0x100000000000149;
  local_148 = 0x149;
  uStack_144 = 0x1000000;
  uStack_140 = uStack_d0;
  uStack_13c = 0xf;
  if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_148);
  local_a0 = local_118;
  ppuVar11 = &local_b0;
  uVar9 = CONCAT44(uVar7,DAT_141a12628);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_158,3,uVar9,ppuVar11);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_b8 = 0x3f;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar7 = (undefined4)*puVar4;
    }
    else {
      uVar7 = FUN_140e4b060(puVar4);
    }
    uVar3 = FUN_140e79500(uVar7);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_dc = 0;
    local_b8 = 0x40;
    local_e8 = uVar3;
    while( true ) {
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uStack_15c = 6;
      uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_f8,uVar9,uVar10);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_5c = 6;
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_68 = param_1;
      FUN_140e87440(&local_68,DAT_1419fe158,0x80000000,&local_108,uVar9,uVar10 & 0xffffffffffffff00)
      ;
      uVar7 = (undefined4)(uVar9 >> 0x20);
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      local_148 = (undefined4)local_f8;
      uStack_144 = local_f8._4_4_;
      uStack_140 = uStack_f0;
      uStack_13c = uStack_ec;
      if ((1 << ((byte)_local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_148);
      local_b0 = local_138;
      uStack_16c = uStack_fc;
      uStack_170 = uStack_100;
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
        local_178 = local_108;
      }
      else {
        FUN_1400419b0(&local_178,&local_108);
      }
      FUN_1400460e0(&local_178,&local_e8);
      local_148 = (undefined4)local_178;
      uStack_144 = local_178._4_4_;
      uStack_140 = uStack_170;
      uStack_13c = uStack_16c;
      if ((1 << ((byte)_local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_148);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_a8 = local_128;
      uStack_cc = 0xf;
      local_d8 = (longlong *)0x100000000000149;
      local_148 = 0x149;
      uStack_144 = 0x1000000;
      uStack_140 = uStack_d0;
      uStack_13c = 0xf;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_148);
      local_a0 = local_118;
      ppuVar11 = &local_b0;
      uVar9 = CONCAT44(uVar7,DAT_141a12628);
      uVar3 = FUN_140e634e0(param_1,param_2,&local_158,3,uVar9,ppuVar11);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') break;
      local_b8 = 0x42;
      local_6c = 6;
      ppuVar11 = (undefined1 **)((ulonglong)ppuVar11 & 0xffffffffffffff00);
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_78 = param_1;
      FUN_140e87440(&local_78,DAT_1419fe158,0x80000000,&local_98,uVar9,ppuVar11);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_1400460e0(&local_98,&local_e8);
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_98);
    }
    local_b8 = 0x44;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdab8);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdaf8);
    iVar2 = FUN_140e851f0(uVar3,uVar5,DAT_141955260,1);
    uVar3 = local_58;
    if (iVar2 == -2 || 0 < iVar2) {
      local_b8 = 0x4c;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0;
    }
    else {
      local_b8 = 0x46;
      uVar5 = (**(code **)(*param_1 + 0x10))();
      uStack_15c = 0;
      local_168 = (longlong *)0xbfe4cccccccccccd;
      FUN_140042560(uVar5,&local_168);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_b8 = 0x47;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04c68);
      local_148 = _DAT_1419e7ae0;
      uStack_144 = uRam00000001419e7ae4;
      uStack_140 = uRam00000001419e7ae8;
      uStack_13c = uRam00000001419e7aec;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_148);
      local_b0 = local_138;
      local_148 = _DAT_1419e7ac0;
      uStack_144 = uRam00000001419e7ac4;
      uStack_140 = uRam00000001419e7ac8;
      uStack_13c = uRam00000001419e7acc;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_148);
      local_a8 = local_128;
      FUN_140e609c0(param_1);
      uVar5 = FUN_140e78db0(&local_158,2,&local_b0);
      local_178 = (longlong *)FUN_140e794b0(0,0x4041800000000000);
      uStack_16c = 0;
      FUN_140042560(&local_178,uVar5);
      if (&local_178 != puVar6) {
        local_148 = (undefined4)local_178;
        uStack_144 = local_178._4_4_;
        uStack_140 = uStack_170;
        uStack_13c = uStack_16c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_148);
      }
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140e60910(1);
      local_b8 = 0x48;
      uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdab8);
      FUN_140046040(uVar5);
    }
  }
  local_b8 = 0x51;
  uStack_15c = 6;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_98,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar11 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_170 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_178,puVar4);
  }
  FUN_140042560(&local_178,uVar3);
  FUN_1400460e0(&local_98,&local_178);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_98);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

