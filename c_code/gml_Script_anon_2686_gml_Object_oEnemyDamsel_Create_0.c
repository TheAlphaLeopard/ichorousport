// gml_Script_anon_2686_gml_Object_oEnemyDamsel_Create_0 @ 0x140977f10

longlong *
gml_Script_anon_2686_gml_Object_oEnemyDamsel_Create_0
          (double param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong in_stack_fffffffffffffea0;
  double local_158;
  undefined4 local_150;
  uint local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined4 local_d8 [3];
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8 [2];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  
  local_120 = "gml_Script_anon@2277@gml_Object_oEnemyDamsel_Create_0";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x70;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x71;
  uStack_13c = 6;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_108,uVar8,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_c8 = local_108;
  uStack_c0 = uStack_100;
  uStack_bc = uStack_fc;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_c8);
  bVar1 = true;
  uVar6 = 0x3ff00000;
  do {
    uVar9 = (undefined4)(uVar8 >> 0x20);
    if (!bVar1) {
      local_118 = 0x71;
      uVar3 = local_14c & 0xffffff;
      if (uVar3 == 0) {
LAB_1409780c8:
        local_158 = local_158 + -1.0;
      }
      else if (uVar3 == 1) {
        local_158 = (double)FUN_140e4b060(&local_158);
        local_158 = local_158 - 1.0;
        local_14c = 0;
      }
      else if (uVar3 == 7) {
        local_158 = (double)CONCAT44(local_158._4_4_,local_158._0_4_ + -1);
      }
      else if (uVar3 == 10) {
        local_158 = (double)((longlong)local_158 + -1);
      }
      else {
        if (uVar3 == 0xd) {
          local_14c = 0;
          goto LAB_1409780c8;
        }
        FUN_140042910(&DAT_14172c450,&local_158,&local_158);
      }
    }
    bVar1 = false;
    local_dc = 0;
    local_e8 = 0;
    uVar3 = FUN_140e851f0(&local_158,&local_e8,DAT_141955260,1);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if (0x7fffffff < uVar3) {
      local_118 = 0x75;
      uVar6 = 0;
      goto LAB_14097833f;
    }
    local_118 = 0x73;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_14097819e:
      local_f8 = *(undefined4 *)puVar4;
      uStack_f4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_f0 = *(undefined4 *)(puVar4 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_f8);
    }
    else {
      puVar4 = (undefined8 *)*param_5;
      if (puVar4 != local_b8) goto LAB_14097819e;
    }
    local_88 = local_b8;
    uStack_13c = local_14c;
    uStack_140 = local_150;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
      local_148 = local_158;
    }
    else {
      FUN_1400419b0(&local_148,&local_158);
    }
    local_cc = 7;
    local_d8[0] = 1;
    FUN_1400462a0(&local_148,local_d8);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    local_f8 = (undefined4)local_148;
    uStack_f4 = local_148._4_4_;
    uStack_f0 = uStack_140;
    uStack_ec = uStack_13c;
    if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_f8);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_80 = local_a8;
    uStack_bc = 0xf;
    local_c8 = 0x100000000000149;
    local_f8 = 0x149;
    uStack_f4 = 0x1000000;
    uStack_f0 = uStack_c0;
    uStack_ec = 0xf;
    if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_f8);
    local_78 = local_98;
    uVar8 = CONCAT44(uVar9,DAT_141a12628);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_138,3,uVar8,&local_88);
    cVar2 = FUN_140e491e0(uVar5);
  } while (cVar2 == '\0');
  local_118 = 0x73;
LAB_14097833f:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar6 << 0x20;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

