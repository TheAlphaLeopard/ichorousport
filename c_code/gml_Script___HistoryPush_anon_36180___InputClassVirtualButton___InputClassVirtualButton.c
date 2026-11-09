// gml_Script___HistoryPush_anon_36180___InputClassVirtualButton___InputClassVirtualButton @ 0x140061170

undefined8 *
gml_Script___HistoryPush_anon_36180___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined8 **ppuVar12;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  
  local_130 = 
  "gml_Script___CaptureTouchpoint@anon@19530@__InputClassVirtualButton@__InputClassVirtualButton";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x2db;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_e8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x2dd;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe338);
  puVar10 = &DAT_1419df7b0;
  iVar2 = FUN_140e851f0(uVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_128 = 0x2de;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe668);
    iVar2 = FUN_140e851f0(uVar3,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar2 == 0) {
      local_128 = 0x2de;
    }
    else {
      local_128 = 0x2df;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe118);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 != '\0') {
        local_128 = 0x2e0;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe0d8);
        cVar1 = FUN_140e491e0(uVar4);
        if (cVar1 != '\0') {
          if (param_4 < 1) {
            puVar5 = &DAT_1419df7b0;
          }
          else {
            puVar5 = (undefined8 *)*param_5;
          }
          uStack_14c = 0;
          local_158 = 0;
          iVar2 = FUN_140e851f0(puVar5,&local_158,DAT_141955260,1);
          if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          if (0 < iVar2) {
            local_128 = 0x2e0;
            goto LAB_14006138f;
          }
        }
        local_128 = 0x2e2;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        if (param_4 < 1) {
          puVar5 = &DAT_1419df7b0;
LAB_1400613fc:
          local_158 = *puVar5;
          uStack_150 = *(undefined4 *)(puVar5 + 1);
          uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_158);
        }
        else {
          puVar5 = (undefined8 *)*param_5;
          if (puVar5 != &local_e8) goto LAB_1400613fc;
        }
        local_78 = &local_e8;
        uVar4 = CONCAT44(uVar11,DAT_1419fe138);
        puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar4,&local_78);
        uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
        if (puVar5 != &local_f8) {
          local_158 = *puVar5;
          uStack_150 = *(undefined4 *)(puVar5 + 1);
          uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_158);
        }
        local_128 = 0x2e3;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        if (param_4 < 1) {
          puVar5 = &DAT_1419df7b0;
LAB_1400614e1:
          local_158 = *puVar5;
          uStack_150 = *(undefined4 *)(puVar5 + 1);
          uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_158);
        }
        else {
          puVar5 = (undefined8 *)*param_5;
          if (puVar5 != &local_e8) goto LAB_1400614e1;
        }
        local_78 = &local_e8;
        uVar4 = CONCAT44(uVar11,DAT_1419fe248);
        puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar4,&local_78);
        uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
        if (puVar5 != &local_108) {
          local_158 = *puVar5;
          uStack_150 = *(undefined4 *)(puVar5 + 1);
          uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_158);
        }
        local_128 = 0x2e5;
        cVar1 = FUN_140e491e0(uVar3);
        if (cVar1 == '\0') {
          local_128 = 0x2eb;
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          local_148 = 0;
          local_140 = 0;
          local_13c = 5;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe418);
          puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe4d8);
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe228);
          puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe678);
          local_78 = &local_f8;
          local_70 = &local_108;
          if (puVar5 != &local_c8) {
            local_158 = *puVar5;
            uStack_150 = *(undefined4 *)(puVar5 + 1);
            uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_c8);
            }
            FUN_140041b80(&local_c8,&local_158);
          }
          local_68 = &local_c8;
          if (puVar6 != &local_b8) {
            local_158 = *puVar6;
            uStack_150 = *(undefined4 *)(puVar6 + 1);
            uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_b8);
            }
            FUN_140041b80(&local_b8,&local_158);
          }
          local_60 = &local_b8;
          if (puVar7 != &local_a8) {
            local_158 = *puVar7;
            uStack_150 = *(undefined4 *)(puVar7 + 1);
            uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
            if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_a8);
            }
            FUN_140041b80(&local_a8,&local_158);
          }
          local_58 = &local_a8;
          if (puVar8 != &local_98) {
            local_158 = *puVar8;
            uStack_150 = *(undefined4 *)(puVar8 + 1);
            uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
            if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_98);
            }
            FUN_140041b80(&local_98,&local_158);
          }
          local_50 = &local_98;
          ppuVar12 = &local_78;
          uVar9 = CONCAT44(uVar11,DAT_1419fe198);
          puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,6,uVar9,ppuVar12);
          if (puVar5 != &local_118) {
            local_158 = *puVar5;
            uStack_150 = *(undefined4 *)(puVar5 + 1);
            uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            FUN_140041b80(&local_118,&local_158);
          }
        }
        else {
          local_128 = 0x2e7;
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          local_148 = 0;
          local_140 = 0;
          local_13c = 5;
          (**(code **)(*param_1 + 8))(param_1,DAT_1419fe668);
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe328);
          puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe528);
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe368);
          local_78 = &local_f8;
          local_70 = &local_108;
          if (puVar5 != &local_c8) {
            local_158 = *puVar5;
            uStack_150 = *(undefined4 *)(puVar5 + 1);
            uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_c8);
            }
            FUN_140041b80(&local_c8,&local_158);
          }
          local_68 = &local_c8;
          if (puVar6 != &local_b8) {
            local_158 = *puVar6;
            uStack_150 = *(undefined4 *)(puVar6 + 1);
            uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_b8);
            }
            FUN_140041b80(&local_b8,&local_158);
          }
          local_60 = &local_b8;
          if (puVar7 != &local_a8) {
            local_158 = *puVar7;
            uStack_150 = *(undefined4 *)(puVar7 + 1);
            uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
            if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_a8);
            }
            FUN_140041b80(&local_a8,&local_158);
          }
          local_58 = &local_a8;
          ppuVar12 = &local_78;
          uVar9 = CONCAT44(uVar11,DAT_1419fe358);
          puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,5,uVar9,ppuVar12);
          if (puVar5 != &local_118) {
            local_158 = *puVar5;
            uStack_150 = *(undefined4 *)(puVar5 + 1);
            uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            FUN_140041b80(&local_118,&local_158);
          }
        }
        local_128 = 0x2ee;
        cVar1 = FUN_140e491e0(&local_118);
        if (cVar1 != '\0') {
          local_128 = 0x2f1;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe088);
          FUN_140e609c0(param_1);
          if (&local_f8 != puVar5) {
            local_158 = local_f8;
            uStack_150 = uStack_f0;
            uStack_14c = uStack_ec;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            FUN_140041b80(puVar5,&local_158);
          }
          FUN_140e60910(1);
          local_128 = 0x2f2;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe798);
          FUN_140e609c0(param_1);
          if (&local_108 != puVar5) {
            local_158 = local_108;
            uStack_150 = uStack_100;
            uStack_14c = uStack_fc;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            FUN_140041b80(puVar5,&local_158);
          }
          FUN_140e60910(1);
          local_128 = 0x2f3;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe088);
          puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe7d8);
          FUN_140e609c0(param_1);
          if (puVar5 != puVar6) {
            local_158 = *puVar5;
            uStack_150 = *(undefined4 *)(puVar5 + 1);
            uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar6);
            }
            FUN_140041b80(puVar6,&local_158);
          }
          FUN_140e60910(1);
          local_128 = 0x2f4;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe798);
          puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe438);
          FUN_140e609c0(param_1);
          if (puVar5 != puVar6) {
            local_158 = *puVar5;
            uStack_150 = *(undefined4 *)(puVar5 + 1);
            uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar6);
            }
            FUN_140041b80(puVar6,&local_158);
          }
          FUN_140e60910(1);
          local_128 = 0x2f6;
          uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe1b8);
          cVar1 = FUN_140e491e0(uVar3);
          if (cVar1 != '\0') {
            local_128 = 0x2f6;
            if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            local_148 = 0;
            local_140 = 0;
            local_13c = 5;
            uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe4b8);
            local_78 = &local_f8;
            local_70 = &local_108;
            ppuVar12 = &local_78;
            FUN_140e63610(param_1,param_2,&local_148,2,uVar9,ppuVar12);
          }
          local_128 = 0x2fa;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe338);
          FUN_140e609c0(param_1);
          if (0 < param_4) {
            puVar10 = (undefined8 *)*param_5;
          }
          if (puVar10 != puVar5) {
            local_158 = *puVar10;
            uStack_150 = *(undefined4 *)(puVar10 + 1);
            uStack_14c = *(undefined4 *)((longlong)puVar10 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            FUN_140041b80(puVar5,&local_158);
          }
          FUN_140e60910(1);
          local_128 = 0x2fb;
          uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcb48);
          puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe6a8);
          FUN_140e87440(uVar3,DAT_1419fe1c8,0x80000000,&local_88,uVar9 & 0xffffffffffffff00,
                        (ulonglong)ppuVar12 & 0xffffffffffffff00);
          FUN_140e609c0(param_1);
          if (&local_88 != puVar10) {
            local_158 = local_88;
            uStack_150 = uStack_80;
            uStack_14c = uStack_7c;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar10);
            }
            FUN_140041b80(puVar10,&local_158);
          }
          FUN_140e60910(1);
        }
        local_128 = 0x2fe;
        if (&local_118 != param_3) {
          local_158 = local_118;
          uStack_150 = uStack_110;
          uStack_14c = uStack_10c;
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_158);
        }
        goto LAB_140061ccd;
      }
      local_128 = 0x2df;
    }
  }
  else {
    local_128 = 0x2dd;
  }
LAB_14006138f:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = 0;
LAB_140061ccd:
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

