// gml_Script_anon_5466____struct___398_gml_Object_oBossThePest_Create_0 @ 0x140813d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_5466____struct___398_gml_Object_oBossThePest_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 **ppuVar8;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  undefined4 **in_stack_fffffffffffffe80;
  ulonglong uVar11;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined4 local_128 [3];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_4c;
  
  local_140 = "gml_Script_anon@4827@___struct___397@gml_Object_oBossThePest_Create_0";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x128;
  _eh_vector_constructor_iterator_(local_128,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_4c = 0xffffff;
  local_58 = (undefined4 *)0x0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_15c = 0;
  local_168 = 0;
  uVar7 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x129;
  local_178 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_170 = DAT_1419df7b8;
  uStack_16c = DAT_1419df7bc;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_88 = local_128;
  local_178 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_170 = DAT_1419df7b8;
  uStack_16c = DAT_1419df7bc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_178);
  local_80 = local_118;
  ppuVar8 = &local_88;
  uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_168,2,ppuVar8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_138 = 299;
    uStack_16c = 6;
    in_stack_fffffffffffffe80 =
         (undefined4 **)((ulonglong)in_stack_fffffffffffffe80 & 0xffffffffffffff00);
    ppuVar8 = (undefined4 **)((ulonglong)ppuVar8 & 0xffffffffffffff00);
    local_178 = param_1;
    FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_98,ppuVar8,in_stack_fffffffffffffe80);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    uStack_16c = 0xf;
    local_178 = (longlong *)0x10000010000037a;
    iVar2 = FUN_140e851f0(&local_98,&local_178,DAT_141955260,0);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    uStack_16c = 0xf;
    if (iVar2 == 0) {
      local_138 = 0x12d;
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      local_178 = (longlong *)0x100000200000015;
      local_158 = 0x15;
      uStack_154 = 0x1000002;
      uStack_150 = uStack_170;
      uStack_14c = 0xf;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_158);
      local_78 = &local_108;
      ppuVar9 = &local_78;
      gml_Script_jb_track_is_paused(param_1,param_2,&local_c8,1,ppuVar9);
      local_138 = 0x12e;
      uStack_16c = 0xf;
      local_178 = (longlong *)0x1000000000000ee;
      local_158 = 0xee;
      uStack_154 = 0x1000000;
      uStack_150 = uStack_170;
      uStack_14c = 0xf;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_158);
      uStack_16c = 0xf;
      local_178 = (longlong *)0x100000000000058;
      FUN_140e87930(&local_178,DAT_141a1f440,0x80000000,&local_a8);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_138 = 0x12f;
      puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09c88);
      if (puVar5 != local_128) {
        local_158 = *puVar5;
        uStack_154 = puVar5[1];
        uStack_150 = puVar5[2];
        uStack_14c = puVar5[3];
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_158);
      }
      local_88 = local_128;
      FUN_140edd0e0(param_1,param_2,1,&local_88);
      local_138 = 0x131;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_58,(ulonglong)ppuVar9 & 0xffffffffffffff00
                    ,(ulonglong)in_stack_fffffffffffffe80 & 0xffffffffffffff00);
      local_158 = _DAT_141dd6d38;
      uStack_154 = uRam0000000141dd6d3c;
      uStack_150 = uRam0000000141dd6d40;
      uStack_14c = DAT_141dd6d44;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_158);
      local_88 = local_128;
      uVar4 = FUN_140069500(uVar4);
      in_stack_fffffffffffffe80 = &local_88;
      ppuVar8 = &local_58;
      FUN_140e63610(uVar4,param_2,&local_168,1,ppuVar8,in_stack_fffffffffffffe80);
      uVar7 = local_bc;
    }
    else {
      local_138 = 0x135;
      local_178 = (longlong *)0x10000010000037a;
      local_158 = 0x37a;
      uStack_154 = 0x1000001;
      uStack_150 = uStack_170;
      uStack_14c = 0xf;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_158);
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_b8);
      local_138 = 0x136;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_cc = 0;
      local_d8 = 0;
      FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_d8);
    }
  }
  local_138 = 0x13b;
  uStack_16c = 6;
  uVar11 = (ulonglong)in_stack_fffffffffffffe80 & 0xffffffffffffff00;
  uVar10 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_98,uVar10,uVar11);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_16c = 0xf;
  local_178 = (longlong *)0x10000010000037a;
  iVar2 = FUN_140e851f0(&local_98,&local_178,DAT_141955260,0);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar2 == 0) {
    uStack_16c = 6;
    local_178 = param_1;
    FUN_140e87440(&local_178,DAT_141a0cfc8,0x80000000,&local_68,uVar10 & 0xffffffffffffff00,
                  uVar11 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    uStack_16c = 0;
    local_178 = (longlong *)0x4014000000000000;
    iVar2 = FUN_140e851f0(&local_68,&local_178,DAT_141955260,1);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (0 < iVar2) {
      local_138 = 0x13d;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      local_158 = _DAT_1419e8a50;
      uStack_154 = uRam00000001419e8a54;
      uStack_150 = uRam00000001419e8a58;
      uStack_14c = uRam00000001419e8a5c;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_158);
      local_88 = local_128;
      local_158 = _DAT_1419e8a10;
      uStack_154 = uRam00000001419e8a14;
      uStack_150 = uRam00000001419e8a18;
      uStack_14c = uRam00000001419e8a1c;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_158);
      local_80 = local_118;
      local_108 = FUN_140e79480(0);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_fc = 0;
      local_78 = &local_108;
      local_158 = (undefined4)DAT_1419df7b0;
      uStack_154 = DAT_1419df7b0._4_4_;
      uStack_150 = DAT_1419df7b8;
      uStack_14c = DAT_1419df7bc;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_158);
      local_70 = local_f8;
      FUN_14044e5b0(param_1,param_2,&local_168,4,&local_88);
      local_138 = 0x13e;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd3b8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0;
    }
  }
  local_138 = 0x141;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_170 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = (longlong *)*puVar6;
  }
  else {
    FUN_1400419b0(&local_178,puVar6);
  }
  FUN_140042560(&local_178,puVar3);
  FUN_1400460e0(uVar4,&local_178);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_138 = 0x142;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_168,0,uVar4,0);
  local_138 = 0x143;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
  FUN_140e63610(param_1,param_2,&local_168,0,uVar4,0);
  local_138 = 0x144;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_168,0,uVar4,0);
  local_138 = 0x145;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_138 = 0x146;
  if (puVar3 != &local_e8) {
    local_158 = *(undefined4 *)puVar3;
    uStack_154 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_150 = *(undefined4 *)(puVar3 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_158);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_e8);
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

