// gml_Script_anon_18906____struct___462_gml_Object_oEnemyDamsel_Create_0 @ 0x140991420

undefined8 *
gml_Script_anon_18906____struct___462_gml_Object_oEnemyDamsel_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar8;
  undefined8 *puVar7;
  ulonglong uVar9;
  undefined1 **ppuVar10;
  double local_188;
  uint local_17c;
  double local_178;
  uint local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_134;
  longlong *local_128;
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
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  local_150 = "gml_Script_anon@18906@___struct___462@gml_Object_oEnemyDamsel_Create_0";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x2ff;
  _eh_vector_constructor_iterator_(local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x300;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0918);
  uVar9 = 0;
  FUN_140e63610(param_1,param_2,&local_168,0,uVar4,0);
  local_148 = 0x301;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
  FUN_140e87440(uVar5,DAT_141a06298,0x80000000,&local_f8,uVar4 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  uVar5 = FUN_140069500(uVar5);
  uVar4 = 0;
  puVar7 = &local_f8;
  FUN_140e63610(uVar5,param_2,&local_168,0,puVar7,0);
  local_148 = 0x302;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd428);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_148 = 0x303;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd5d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_148 = 0x304;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x1000001000000d6;
  local_a8 = 0x1000001000000d6;
  uStack_a0 = uStack_120;
  uStack_9c = 0xf;
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_a8);
  FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_140);
  local_148 = 0x306;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0.0;
  local_148 = 0x307;
  do {
    local_17c = 0;
LAB_140991700:
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_cc = 6;
    uVar4 = uVar4 & 0xffffffffffffff00;
    uVar9 = (ulonglong)puVar7 & 0xffffffffffffff00;
    local_d8 = param_1;
    FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_108,uVar9,uVar4);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_bc = 6;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_c8 = param_1;
    FUN_140e87440(&local_c8,DAT_1419fe158,0x80000000,&local_118,uVar9,uVar4 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_e8 = (undefined4)local_108;
    uStack_e4 = local_108._4_4_;
    uStack_e0 = uStack_100;
    uStack_dc = uStack_fc;
    if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_e8);
    local_68 = local_98;
    local_e8 = (undefined4)local_118;
    uStack_e4 = local_118._4_4_;
    uStack_e0 = uStack_110;
    uStack_dc = uStack_10c;
    if ((1 << (local_88[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_e8);
    local_60 = local_88;
    uStack_9c = 0xf;
    local_a8 = 0x100000000000149;
    local_e8 = 0x149;
    uStack_e4 = 0x1000000;
    uStack_e0 = uStack_a0;
    uStack_dc = 0xf;
    if ((1 << (local_78[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_e8);
    local_58 = local_78;
    ppuVar10 = &local_68;
    uVar9 = CONCAT44(uVar8,DAT_141a12628);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_168,3,uVar9,ppuVar10);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
LAB_140991a57:
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      _eh_vector_destructor_iterator_(local_98,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_158;
      return param_3;
    }
    local_ac = 0;
    local_b8 = 0x4040000000000000;
    iVar2 = FUN_140e851f0(&local_188,&local_b8,DAT_141955260,1);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if (iVar2 == -2 || -1 < iVar2) goto LAB_140991a57;
    local_148 = 0x309;
    uStack_11c = 6;
    uVar4 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    puVar7 = (undefined8 *)(uVar9 & 0xffffffffffffff00);
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_178,puVar7,uVar4);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    uVar3 = local_16c & 0xffffff;
    if (uVar3 == 0) {
LAB_14099198b:
      local_178 = local_178 + 1.0;
    }
    else {
      if (uVar3 == 1) {
        local_178 = (double)FUN_140e4b060(&local_178);
        local_16c = 0;
        goto LAB_14099198b;
      }
      if (uVar3 == 7) {
        local_178 = (double)CONCAT44(local_178._4_4_,local_178._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_178 = (double)((longlong)local_178 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_16c = 0;
          goto LAB_14099198b;
        }
        FUN_140042910(&DAT_14172c3d8,&local_178,&local_178);
      }
    }
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_178);
    local_148 = 0x30a;
    uVar3 = local_17c & 0xffffff;
    if (uVar3 == 0) {
LAB_140991a16:
      local_188 = local_188 + 1.0;
      goto LAB_140991700;
    }
    if (uVar3 != 1) {
      if (uVar3 == 7) {
        local_188 = (double)CONCAT44(local_188._4_4_,local_188._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_188 = (double)((longlong)local_188 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_17c = 0;
          goto LAB_140991a16;
        }
        FUN_140042910(&DAT_14172c3d8,&local_188,&local_188);
      }
      goto LAB_140991700;
    }
    local_188 = (double)FUN_140e4b060(&local_188);
    local_188 = local_188 + 1.0;
  } while( true );
}

