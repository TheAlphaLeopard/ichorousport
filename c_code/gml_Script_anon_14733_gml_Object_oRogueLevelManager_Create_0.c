// gml_Script_anon_14733_gml_Object_oRogueLevelManager_Create_0 @ 0x140cc9980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_14733_gml_Object_oRogueLevelManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar13;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_f0 = "gml_Script_anon@14056@anon@12473@gml_Object_oRogueLevelManager_Create_0";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x249;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_11c = 0;
  local_128 = 0;
  local_c4 = 0;
  local_d0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x24a;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9d98);
  if (puVar5 != &local_98) {
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_138);
  }
  local_e0 = &local_98;
  ppuVar14 = &local_e0;
  uVar11 = CONCAT44(uVar13,DAT_1419fcb88);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar11,ppuVar14);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 != '\0') {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9d98);
    uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419ffb98,0x80000000,&local_58,uVar11,uVar15);
    cVar3 = FUN_140e491e0(&local_58);
    if (cVar3 != '\0') {
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9c88);
      uStack_12c = 0xf;
      local_138 = 0x10000010000011b;
      iVar4 = FUN_140e851f0(uVar6,&local_138,DAT_141955260,0);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if (iVar4 != 0) {
        local_e8 = 0x24b;
        if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d0);
        }
        local_d0 = 0;
        local_c8 = 0;
        local_c4 = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9d98);
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9ab8);
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9bb8);
        FUN_140e87440(uVar6,DAT_1419f9d78,0x80000000,&local_68,uVar11 & 0xffffffffffffff00,
                      uVar15 & 0xffffffffffffff00);
        if (puVar5 != &local_88) {
          local_138 = *puVar5;
          uStack_130 = *(undefined4 *)(puVar5 + 1);
          uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_88);
          }
          FUN_140041b80(&local_88,&local_138);
        }
        local_d8 = &local_88;
        FUN_140e609c0(param_1);
        uVar6 = FUN_140069500(uVar6);
        puVar5 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_d0,1,&local_68,&local_d8);
        if (puVar5 != puVar7) {
          local_138 = *puVar5;
          uStack_130 = *(undefined4 *)(puVar5 + 1);
          uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_138);
        }
        FUN_140e60910(1);
        goto LAB_140cc9cfa;
      }
    }
  }
  local_e8 = 0x24d;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9bb8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
LAB_140cc9cfa:
  local_e8 = 0x24f;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9b68);
  FUN_140e63610(param_1,param_2,&local_128,0,uVar6,0);
  uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_e8 = 0x251;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9c48);
  uStack_12c = 0;
  local_138 = 0;
  iVar4 = FUN_140e851f0(uVar6,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar4 == -2 || 0 < iVar4) {
    local_e8 = 599;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9e68);
    uStack_10c = *(uint *)((longlong)puVar5 + 0xc);
    uStack_110 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
      local_118 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_118,puVar5);
    }
    FUN_140046500(&local_118,uVar6);
    if ((uStack_10c & 0xffffff) == 0) {
      uVar10 = (undefined4)local_118;
    }
    else {
      uVar10 = FUN_140e4b060(&local_118);
    }
    uVar12 = FUN_140e78ec0(uVar10,0,0x3ff0000000000000);
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    local_b4 = 0;
    local_c0 = uVar12;
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_e8 = 600;
    uStack_12c = 0;
    local_138 = 0x3fe0000000000000;
    iVar4 = FUN_140e851f0(&local_c0,&local_138,DAT_141955260,1);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (iVar4 == -2 || -1 < iVar4) {
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9a18);
      uStack_10c = *(uint *)((longlong)puVar7 + 0xc);
      uStack_110 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_118 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_118,puVar7);
      }
      puVar7 = &local_118;
      bVar2 = false;
      bVar1 = true;
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9968);
      uStack_12c = *(undefined4 *)((longlong)puVar7 + 0xc);
      uStack_130 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_138 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_138,puVar7);
      }
      puVar7 = &local_138;
      bVar2 = true;
      bVar1 = false;
    }
    local_a8 = *(undefined4 *)puVar7;
    uStack_a4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_a0 = *(undefined4 *)(puVar7 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_a8);
    if ((bVar1) && ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_118);
    }
    if ((bVar2) && ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_138);
    }
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_108);
    local_e8 = 0x25a;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uStack_12c = 0xf;
    local_138 = 0x100000a00000003;
    local_a8 = 3;
    uStack_a4 = 0x100000a;
    uStack_a0 = uStack_130;
    uStack_9c = 0xf;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_a8);
    local_e0 = &local_98;
    local_a8 = _DAT_141dc7590;
    uStack_a4 = uRam0000000141dc7594;
    uStack_a0 = uRam0000000141dc7598;
    uStack_9c = uRam0000000141dc759c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_a8);
    local_d8 = &local_88;
    uVar12 = CONCAT44(uVar13,DAT_141a04248);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,2,uVar12,&local_e0);
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if (puVar7 != &local_78) {
      local_a8 = *(undefined4 *)puVar7;
      uStack_a4 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_a0 = *(undefined4 *)(puVar7 + 1);
      uStack_9c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_a8);
    }
    local_e8 = 0x25b;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9ed8);
    local_e0 = &local_78;
    local_d8 = &local_c0;
    FUN_140e609c0(param_1);
    puVar9 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_128,2,CONCAT44(uVar13,DAT_141a04258),&local_e0);
    if (puVar9 != puVar8) {
      local_a8 = *puVar9;
      uStack_a4 = puVar9[1];
      uStack_a0 = puVar9[2];
      uStack_9c = puVar9[3];
      if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_a8);
    }
    FUN_140e60910(1);
    local_e8 = 0x25d;
    iVar4 = FUN_140e851f0(puVar5,uVar6,DAT_141955260,1);
    if (iVar4 != -2 && iVar4 < 0) {
      local_e8 = 0x25e;
      (**(code **)(*param_1 + 8))(param_1,DAT_1419f9c48);
      (**(code **)(*param_1 + 8))(param_1,DAT_1419f9e68);
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9e68);
      FUN_140046040(uVar6);
    }
  }
  else {
    local_e8 = 0x252;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9a18);
    if (puVar5 != &local_108) {
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_138);
    }
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_108);
    local_e8 = 0x253;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9ed8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x3ff0000000000000;
    local_e8 = 0x254;
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

