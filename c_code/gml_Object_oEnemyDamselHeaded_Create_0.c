// gml_Object_oEnemyDamselHeaded_Create_0 @ 0x140996130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEnemyDamselHeaded_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar11;
  undefined1 **ppuVar10;
  undefined4 **in_stack_fffffffffffffec0;
  undefined4 **ppuVar12;
  ulonglong uVar13;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 *local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_e0 = "gml_Object_oEnemyDamsel_Step_0";
  local_d8 = 0;
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  local_7c = 0xffffff;
  local_88 = (undefined1 *)0x0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_11c = 0xffffff;
  local_128 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_d8 = 3;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f07d8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_d8 = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f07d8);
    uStack_12c = 0xd;
    local_138 = (longlong *)0x3ff0000000000000;
    if (&local_138 != puVar5) {
      local_118 = 0;
      uStack_114 = 0x3ff00000;
      uStack_110 = uStack_130;
      uStack_10c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_118);
    }
    local_d8 = 6;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0868);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') {
      local_d8 = 6;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_58,(ulonglong)pcVar8 & 0xffffffffffffff00,
                    (ulonglong)in_stack_fffffffffffffec0 & 0xffffffffffffff00);
      local_118 = (undefined4)DAT_141dd88a8;
      uStack_114 = DAT_141dd88a8._4_4_;
      uStack_110 = DAT_141dd88b0;
      uStack_10c = DAT_141dd88b4;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_118);
      local_48 = local_c8;
      uVar4 = FUN_140069500(uVar4);
      in_stack_fffffffffffffec0 = &local_48;
      pcVar8 = (code *)&local_58;
      FUN_140e63610(uVar4,param_2,&local_128,1,pcVar8,in_stack_fffffffffffffec0);
    }
  }
  local_d8 = 9;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar4,DAT_1419f5df8,0x80000000,&local_88,(ulonglong)pcVar8 & 0xffffffffffffff00,
                (ulonglong)in_stack_fffffffffffffec0 & 0xffffffffffffff00);
  uVar4 = FUN_140069500(uVar4);
  ppuVar12 = (undefined4 **)0x0;
  ppuVar10 = &local_88;
  puVar5 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_128,0,ppuVar10,0);
  if (puVar5 != &local_f8) {
    local_118 = *(undefined4 *)puVar5;
    uStack_114 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_110 = *(undefined4 *)(puVar5 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_118);
  }
  local_d8 = 10;
  uStack_12c = DAT_141dd88b4;
  uStack_130 = DAT_141dd88b0;
  if ((1 << ((byte)DAT_141dd88b4 & 0x1f) & 0x46U) == 0) {
    local_138 = (longlong *)CONCAT44(DAT_141dd88a8._4_4_,(undefined4)DAT_141dd88a8);
  }
  else {
    FUN_1400419b0(&local_138,&DAT_141dd88a8);
  }
  iVar2 = FUN_140e851f0(&local_f8,&local_138,DAT_141955260,0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 != 0) {
    uStack_12c = DAT_141dd88c4;
    uStack_130 = DAT_141dd88c0;
    if ((1 << ((byte)DAT_141dd88c4 & 0x1f) & 0x46U) == 0) {
      local_138 = (longlong *)DAT_141dd88b8;
    }
    else {
      FUN_1400419b0(&local_138,&DAT_141dd88b8);
    }
    iVar2 = FUN_140e851f0(&local_f8,&local_138,DAT_141955260,0);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (iVar2 != 0) {
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uStack_12c = 6;
      uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
      uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
      local_138 = param_1;
      FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_68,uVar9,uVar13);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      uStack_12c = 6;
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_138 = param_1;
      FUN_140e87440(&local_138,DAT_1419fe158,0x80000000,&local_78,uVar9,uVar13 & 0xffffffffffffff00)
      ;
      uVar11 = (undefined4)(uVar9 >> 0x20);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_118 = (undefined4)local_68;
      uStack_114 = local_68._4_4_;
      uStack_110 = uStack_60;
      uStack_10c = uStack_5c;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_118);
      local_48 = local_c8;
      local_118 = (undefined4)local_78;
      uStack_114 = local_78._4_4_;
      uStack_110 = uStack_70;
      uStack_10c = uStack_6c;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_118);
      local_40 = local_b8;
      uStack_12c = 0xf;
      local_138 = (longlong *)0x100000000000149;
      local_118 = 0x149;
      uStack_114 = 0x1000000;
      uStack_110 = uStack_130;
      uStack_10c = 0xf;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_118);
      local_38 = local_a8;
      ppuVar12 = &local_48;
      ppuVar10 = (undefined1 **)CONCAT44(uVar11,DAT_141a12628);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_128,3,ppuVar10,ppuVar12);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 != '\0') {
        local_d8 = 0xb;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_108 = 0;
        local_100 = 0;
        local_fc = 5;
        uStack_12c = 0xf;
        local_138 = (longlong *)0x100000000000149;
        local_118 = 0x149;
        uStack_114 = 0x1000000;
        uStack_110 = uStack_130;
        uStack_10c = 0xf;
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_118);
        local_30 = local_98;
        ppuVar10 = &local_30;
        gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_108,1,ppuVar10);
      }
    }
  }
  local_d8 = 0xd;
  FUN_140e98b30(param_1,param_2);
  local_d8 = 0xf;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar4,DAT_1419f5df8,0x80000000,&local_88,(ulonglong)ppuVar10 & 0xffffffffffffff00,
                (ulonglong)ppuVar12 & 0xffffffffffffff00);
  uStack_12c = DAT_141dd88a4;
  uStack_130 = DAT_141dd88a0;
  if ((1 << ((byte)DAT_141dd88a4 & 0x1f) & 0x46U) == 0) {
    local_138 = (longlong *)DAT_141dd8898;
  }
  else {
    FUN_1400419b0(&local_138,&DAT_141dd8898);
  }
  uVar4 = FUN_140069500(uVar4);
  ppuVar10 = &local_88;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_128,0,ppuVar10,0);
  uVar11 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
  iVar2 = FUN_140e851f0(uVar4,&local_138,DAT_141955260,0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 != 0) {
    local_d8 = 0x10;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
    if (puVar6 != local_c8) {
      local_118 = *puVar6;
      uStack_114 = puVar6[1];
      uStack_110 = puVar6[2];
      uStack_10c = puVar6[3];
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_118);
    }
    local_48 = local_c8;
    local_118 = _DAT_141dc6e80;
    uStack_114 = uRam0000000141dc6e84;
    uStack_110 = uRam0000000141dc6e88;
    uStack_10c = uRam0000000141dc6e8c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_118);
    local_40 = local_b8;
    uStack_12c = 0;
    local_138 = (longlong *)0x3fb999999999999a;
    FUN_140042560(&local_138,uVar3);
    local_118 = (undefined4)local_138;
    uStack_114 = local_138._4_4_;
    uStack_110 = uStack_130;
    uStack_10c = uStack_12c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_118);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_38 = local_a8;
    FUN_140e609c0(param_1);
    puVar6 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_108,3,CONCAT44(uVar11,DAT_141a00c58),&local_48);
    if (puVar6 != puVar7) {
      local_118 = *puVar6;
      uStack_114 = puVar6[1];
      uStack_110 = puVar6[2];
      uStack_10c = puVar6[3];
      if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_118);
    }
    FUN_140e60910(1);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return;
}

