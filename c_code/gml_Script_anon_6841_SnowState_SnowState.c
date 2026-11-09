// gml_Script_anon_6841_SnowState_SnowState @ 0x1404f6360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_anon_6841_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 uVar12;
  double local_138;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  longlong local_98;
  byte local_8c;
  undefined1 local_88 [12];
  undefined4 local_7c;
  undefined8 *local_78;
  longlong *local_70;
  undefined1 *local_68;
  uint local_60 [2];
  undefined8 *local_58;
  
  local_f0 = "gml_Script_anon@5596@SnowState@SnowState";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0xbe;
  FUN_140041df0(local_60,param_4,2,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_11c = 0;
  local_128 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0xbe;
  uVar10 = (ulonglong)local_60[0];
  if ((int)local_60[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_58[1];
  }
  iVar4 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  uVar11 = 0x3ff00000;
  if (iVar4 == 0) {
    local_e8 = 0xbe;
    uStack_cc = 0xd;
    local_d8 = 0x3ff0000000000000;
    if ((int)local_60[0] < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_58[1];
      if (&local_d8 == puVar7) goto LAB_1404f6508;
    }
    local_108 = 0;
    uStack_104 = 0x3ff00000;
    uStack_100 = uStack_d0;
    uStack_fc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_108);
  }
LAB_1404f6508:
  local_e8 = 0xbf;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
  if (puVar7 != &local_118) {
    local_108 = *(undefined4 *)puVar7;
    uStack_104 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_100 = *(undefined4 *)(puVar7 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_108);
  }
  local_e8 = 0xc0;
  if ((int)local_60[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_58[1];
  }
  cVar3 = FUN_140e491e0(puVar7);
  if (cVar3 == '\0') {
    local_e8 = 0xc1;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcd68);
    if (puVar7 != &local_118) {
      local_108 = *(undefined4 *)puVar7;
      uStack_104 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_100 = *(undefined4 *)(puVar7 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_108);
    }
  }
  local_e8 = 0xc4;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((int)local_60[0] < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_1404f6621:
    local_108 = *(undefined4 *)puVar7;
    uStack_104 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_100 = *(undefined4 *)(puVar7 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_108);
  }
  else {
    puVar7 = (undefined8 *)*local_58;
    if (puVar7 != &local_a8) goto LAB_1404f6621;
  }
  local_78 = &local_a8;
  uVar8 = FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar12,DAT_1419fdbf8),&local_78);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 != '\0') {
    uStack_cc = DAT_141dd39a4;
    uStack_d0 = DAT_141dd39a0;
    if ((1 << ((byte)DAT_141dd39a4 & 0x1f) & 0x46U) == 0) {
      local_d8 = DAT_141dd3998;
    }
    else {
      FUN_1400419b0(&local_d8,&DAT_141dd3998);
    }
    if ((int)local_60[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_58;
    }
    iVar4 = FUN_140e851f0(puVar7,&local_d8,DAT_141955260,0);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if (iVar4 != 0) {
      local_e8 = 0xca;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_12c = 0;
      local_138 = 0.0;
      plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcf38);
      iVar4 = 0;
      if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
        iVar4 = *(int *)(*plVar9 + 0x24);
      }
      do {
        if (iVar4 < 1) {
          local_e8 = 0xd2;
          goto LAB_1404f6ad1;
        }
        iVar4 = iVar4 + -1;
        local_e8 = 0xcb;
        plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcf38);
        iVar5 = FUN_140e4a740(&local_138);
        if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0))
        {
          if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar9 = (longlong *)0x0;
          }
          else {
            plVar9 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (plVar9 != &local_b8) {
          local_108 = (undefined4)*plVar9;
          uStack_104 = *(undefined4 *)((longlong)plVar9 + 4);
          uStack_100 = (undefined4)plVar9[1];
          uStack_fc = *(undefined4 *)((longlong)plVar9 + 0xc);
          if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          FUN_140041b80(&local_b8,&local_108);
        }
        uVar6 = local_12c & 0xffffff;
        if (uVar6 == 0) {
LAB_1404f6875:
          local_138 = local_138 + 1.0;
        }
        else {
          if (uVar6 == 1) {
            local_138 = (double)FUN_140e4b060(&local_138);
            local_12c = 0;
            goto LAB_1404f6875;
          }
          if (uVar6 == 7) {
            local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
          }
          else if (uVar6 == 10) {
            local_138 = (double)((longlong)local_138 + 1);
          }
          else {
            if (uVar6 == 0xd) {
              local_12c = 0;
              goto LAB_1404f6875;
            }
            FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
          }
        }
        local_e8 = 0xcc;
        if ((int)local_60[0] < 1) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)*local_58;
        }
        iVar5 = FUN_140e851f0(puVar7,&local_b8,DAT_141955260,0);
      } while (iVar5 != 0);
      local_e8 = 0xcd;
      iVar4 = FUN_140e851f0(&local_118,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar4 != 0) {
        local_e8 = 0xcd;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        local_108 = _DAT_141dd3ab8;
        uStack_104 = uRam0000000141dd3abc;
        uStack_100 = uRam0000000141dd3ac0;
        uStack_fc = DAT_141dd3ac4;
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_108);
        local_78 = &local_a8;
        local_70 = &local_b8;
        local_108 = _DAT_141dd3c18;
        uStack_104 = uRam0000000141dd3c1c;
        uStack_100 = uRam0000000141dd3c20;
        uStack_fc = DAT_141dd3c24;
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_88);
        }
        FUN_140041b80(local_88,&local_108);
        local_68 = local_88;
        FUN_140e63610(param_1,param_2,&local_128,3,&local_118,&local_78);
      }
      local_e8 = 0xce;
      goto LAB_1404f6ace;
    }
  }
  local_e8 = 0xc5;
  iVar4 = FUN_140e851f0(&local_118,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 != 0) {
    local_e8 = 0xc5;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    local_108 = _DAT_141dd3ba8;
    uStack_104 = uRam0000000141dd3bac;
    uStack_100 = uRam0000000141dd3bb0;
    uStack_fc = DAT_141dd3bb4;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_108);
    local_70 = &local_98;
    FUN_140e63610(param_1,param_2,&local_c8,1,&local_118,&local_70);
  }
  local_e8 = 0xc6;
LAB_1404f6ace:
  uVar11 = 0;
LAB_1404f6ad1:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar11 << 0x20;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,3,FUN_140041b30);
  if (0 < (int)local_60[0]) {
    puVar7 = local_58;
    do {
      puVar2 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_58);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

