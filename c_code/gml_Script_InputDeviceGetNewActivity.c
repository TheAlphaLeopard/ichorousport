// gml_Script_InputDeviceGetNewActivity @ 0x14031f890

undefined8 *
gml_Script_InputDeviceGetNewActivity
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_b8;
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 *local_68;
  undefined4 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  local_f0 = "gml_Script_InputDeviceGetGamepadValue";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 10;
  _eh_vector_constructor_iterator_(&local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_11c = 0;
  local_128 = 0;
  local_c4 = 0;
  local_d0 = 0;
  local_d4 = 0;
  local_e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0xc;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uStack_fc = 0;
  local_108 = 0;
  iVar2 = FUN_140e851f0(puVar5,&local_108,DAT_141955260,1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (iVar2 == -2 || -1 < iVar2) {
    local_e8 = 0xd;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar3 = gml_Script_InputGetBindingName(param_1,param_2,&local_128,0,0);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      local_e8 = 0xd;
    }
    else {
      local_e8 = 0xe;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      if (param_4 < 1) {
        puVar5 = &DAT_1419df7b0;
LAB_14031fa72:
        local_118 = *(undefined4 *)puVar5;
        uStack_114 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_110 = *(undefined4 *)(puVar5 + 1);
        uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_118);
      }
      else {
        puVar5 = (undefined8 *)*param_5;
        if (puVar5 != &local_b8) goto LAB_14031fa72;
      }
      local_68 = &local_b8;
      ppuVar7 = &local_68;
      uVar3 = gml_Script_InputDeviceIsGamepad(param_1,param_2,&local_128,1,ppuVar7);
      uVar9 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') {
        local_e8 = 0xf;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        if (param_4 < 1) {
          puVar5 = &DAT_1419df7b0;
LAB_14031fb44:
          local_118 = *(undefined4 *)puVar5;
          uStack_114 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_110 = *(undefined4 *)(puVar5 + 1);
          uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          FUN_140041b80(&local_b8,&local_118);
        }
        else {
          puVar5 = (undefined8 *)*param_5;
          if (puVar5 != &local_b8) goto LAB_14031fb44;
        }
        local_68 = &local_b8;
        uVar8 = CONCAT44(uVar9,DAT_1419fd258);
        uVar3 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar8,&local_68);
        uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
        cVar1 = FUN_140e491e0(uVar3);
        if (cVar1 == '\0') {
          local_e8 = 0xf;
        }
        else {
          local_e8 = 0x10;
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          local_128 = 0;
          local_120 = 0;
          local_11c = 5;
          if (param_4 < 2) {
            puVar5 = &DAT_1419df7b0;
LAB_14031fc06:
            local_118 = *(undefined4 *)puVar5;
            uStack_114 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_110 = *(undefined4 *)(puVar5 + 1);
            uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_b8);
            }
            FUN_140041b80(&local_b8,&local_118);
          }
          else {
            puVar5 = (undefined8 *)param_5[1];
            if (puVar5 != &local_b8) goto LAB_14031fc06;
          }
          local_68 = &local_b8;
          uVar3 = FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar9,DAT_1419fdbf8),&local_68
                               );
          cVar1 = FUN_140e491e0(uVar3);
          if (cVar1 == '\0') {
            local_e8 = 0x13;
            if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_128);
            }
            local_128 = 0;
            local_120 = 0;
            local_11c = 5;
            if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_d0);
            }
            local_d0 = 0;
            local_c8 = 0;
            local_c4 = 5;
            if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e0);
            }
            local_e0 = 0;
            local_d8 = 0;
            local_d4 = 5;
            if (param_4 < 1) {
              puVar5 = &DAT_1419df7b0;
LAB_14031fd32:
              local_118 = *(undefined4 *)puVar5;
              uStack_114 = *(undefined4 *)((longlong)puVar5 + 4);
              uStack_110 = *(undefined4 *)(puVar5 + 1);
              uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
              if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_b8);
              }
              FUN_140041b80(&local_b8,&local_118);
            }
            else {
              puVar5 = (undefined8 *)*param_5;
              if (puVar5 != &local_b8) goto LAB_14031fd32;
            }
            local_68 = &local_b8;
            ppuVar7 = &local_68;
            puVar4 = (undefined4 *)
                     gml_Script___InputGamepadGUIDParse(param_1,param_2,&local_d0,1,ppuVar7);
            uVar9 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
            if (puVar4 != local_a8) {
              local_118 = *puVar4;
              uStack_114 = puVar4[1];
              uStack_110 = puVar4[2];
              uStack_10c = puVar4[3];
              if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_a8);
              }
              FUN_140041b80(local_a8,&local_118);
            }
            local_60 = local_a8;
            if (param_4 < 2) {
              puVar5 = &DAT_1419df7b0;
            }
            else {
              puVar5 = (undefined8 *)param_5[1];
            }
            uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
            uStack_100 = *(undefined4 *)(puVar5 + 1);
            if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
              local_108 = *puVar5;
            }
            else {
              FUN_1400419b0(&local_108);
            }
            uStack_10c = 7;
            local_118 = 0x8001;
            FUN_1400462a0(&local_108,&local_118);
            if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            local_118 = (undefined4)local_108;
            uStack_114 = local_108._4_4_;
            uStack_110 = uStack_100;
            uStack_10c = uStack_fc;
            if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_98);
            }
            FUN_140041b80(local_98,&local_118);
            if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_108);
            }
            local_58 = local_98;
            if (param_4 < 1) {
              puVar5 = &DAT_1419df7b0;
LAB_14031fea5:
              local_118 = *(undefined4 *)puVar5;
              uStack_114 = *(undefined4 *)((longlong)puVar5 + 4);
              uStack_110 = *(undefined4 *)(puVar5 + 1);
              uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
              if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_88);
              }
              FUN_140041b80(&local_88,&local_118);
            }
            else {
              puVar5 = (undefined8 *)*param_5;
              if (puVar5 != &local_88) goto LAB_14031fea5;
            }
            local_50 = &local_88;
            if ((param_4 < 2) || (puVar6 = (undefined8 *)param_5[1], puVar6 != &local_78)) {
              local_118 = *(undefined4 *)puVar6;
              uStack_114 = *(undefined4 *)((longlong)puVar6 + 4);
              uStack_110 = *(undefined4 *)(puVar6 + 1);
              uStack_10c = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_78);
              }
              FUN_140041b80(&local_78,&local_118);
            }
            local_48 = &local_78;
            uVar3 = FUN_140e634e0(param_1,param_2,&local_128,2,CONCAT44(uVar9,DAT_141a03ca8),
                                  &local_60);
            puVar6 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_e0,2,uVar3,&local_50);
            if (puVar6 != param_3) {
              local_118 = *(undefined4 *)puVar6;
              uStack_114 = *(undefined4 *)((longlong)puVar6 + 4);
              uStack_110 = *(undefined4 *)(puVar6 + 1);
              uStack_10c = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(param_3);
              }
              FUN_140041b80(param_3,&local_118);
            }
            goto LAB_14031ffa4;
          }
          local_e8 = 0x10;
        }
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
        *param_3 = 0;
        goto LAB_14031ffa4;
      }
      local_e8 = 0xe;
    }
  }
  else {
    local_e8 = 0xc;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = 0;
LAB_14031ffa4:
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

