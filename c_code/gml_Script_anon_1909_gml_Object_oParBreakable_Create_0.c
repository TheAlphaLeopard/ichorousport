// gml_Script_anon_1909_gml_Object_oParBreakable_Create_0 @ 0x140b9d3f0

undefined8 *
gml_Script_anon_1909_gml_Object_oParBreakable_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_c8;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_58;
  undefined4 local_54;
  
  local_f0 = "gml_Script_anon@854@gml_Object_oParBreakable_Create_0";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x2d;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
  }
  uStack_11c = 0;
  local_128 = 0;
  iVar3 = FUN_140e851f0(puVar4,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar3 == 0) {
    local_e8 = 0x2d;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0x3ff0000000000000;
  }
  else {
    local_e8 = 0x2e;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    local_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    local_100 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
      local_108 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_108);
    }
    local_bc = 0xf;
    local_c8 = 0x1000000000000e9;
    local_a8 = 0xf;
    local_b4 = 0x1000000000000e8;
    local_94 = 0xf;
    local_a0 = 0x1000000000000e7;
    local_80 = 0xf;
    local_8c = 0x1000000000000e5;
    local_7c = 1;
    local_6c = 0xf;
    local_78 = 0x1000000000000e4;
    local_68 = 1;
    local_58 = 0xf;
    local_64 = 0x1000000000000e3;
    local_54 = 1;
    uVar5 = 0;
    do {
      iVar3 = FUN_140e851f0((longlong)&local_c8 + (longlong)(int)uVar5 * 0x14,&local_108,
                            DAT_141955260,0);
      if (iVar3 == 0) {
        iVar3 = *(int *)((longlong)&local_bc + (longlong)(int)uVar5 * 0x14 + 4);
        if (iVar3 == 0) {
          local_e8 = 0x32;
          if (1 < param_4) {
            puVar6 = (undefined8 *)param_5[1];
          }
          uStack_11c = 0;
          local_128 = 0;
          iVar3 = FUN_140e851f0(puVar6,&local_128,DAT_141955260,1);
          if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          if (iVar3 < 1) {
            puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5688);
            uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
            uStack_120 = *(undefined4 *)(puVar6 + 1);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
              local_128 = *puVar6;
            }
            else {
              FUN_1400419b0(&local_128,puVar6);
            }
            puVar6 = &local_128;
            bVar2 = false;
            bVar1 = true;
          }
          else {
            puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5708);
            uStack_10c = *(undefined4 *)((longlong)puVar6 + 0xc);
            uStack_110 = *(undefined4 *)(puVar6 + 1);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
              local_118 = *puVar6;
            }
            else {
              FUN_1400419b0(&local_118,puVar6);
            }
            puVar6 = &local_118;
            bVar2 = true;
            bVar1 = false;
          }
          if (puVar6 != param_3) {
            local_e0 = *(undefined4 *)puVar6;
            uStack_dc = *(undefined4 *)((longlong)puVar6 + 4);
            uStack_d8 = *(undefined4 *)(puVar6 + 1);
            uStack_d4 = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(param_3);
            }
            FUN_140041b80(param_3,&local_e0);
          }
          if ((bVar1) && ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_128);
          }
          if ((bVar2) && ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_118);
          }
          goto LAB_140b9d93c;
        }
        if (iVar3 == 1) {
          local_e8 = 0x36;
          if (1 < param_4) {
            puVar6 = (undefined8 *)param_5[1];
          }
          uStack_11c = 0;
          local_128 = 0;
          iVar3 = FUN_140e851f0(puVar6,&local_128,DAT_141955260,1);
          if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          if (iVar3 < 1) {
            puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5698);
            uStack_10c = *(undefined4 *)((longlong)puVar6 + 0xc);
            uStack_110 = *(undefined4 *)(puVar6 + 1);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
              local_118 = *puVar6;
            }
            else {
              FUN_1400419b0(&local_118,puVar6);
            }
            puVar6 = &local_118;
            bVar2 = false;
            bVar1 = true;
          }
          else {
            puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5678);
            uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
            uStack_120 = *(undefined4 *)(puVar6 + 1);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
              local_128 = *puVar6;
            }
            else {
              FUN_1400419b0(&local_128,puVar6);
            }
            puVar6 = &local_128;
            bVar2 = true;
            bVar1 = false;
          }
          if (puVar6 != param_3) {
            local_e0 = *(undefined4 *)puVar6;
            uStack_dc = *(undefined4 *)((longlong)puVar6 + 4);
            uStack_d8 = *(undefined4 *)(puVar6 + 1);
            uStack_d4 = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(param_3);
            }
            FUN_140041b80(param_3,&local_e0);
          }
          if ((bVar1) && ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_118);
          }
          if ((bVar2) && ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_128);
          }
          goto LAB_140b9d93c;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 6);
    local_e8 = 0x38;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0x3ff0000000000000;
LAB_140b9d93c:
    _eh_vector_destructor_iterator_(&local_c8,0x14,6,FUN_1400662d0);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
  }
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

