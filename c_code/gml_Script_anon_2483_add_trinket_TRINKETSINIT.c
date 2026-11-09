// gml_Script_anon_2483_add_trinket_TRINKETSINIT @ 0x1405deb10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2483_add_trinket_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uVar10;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 **ppuVar11;
  ulonglong uVar12;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  
  local_100 = "gml_Script_mark_trinket_seen";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x18;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57320);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_12c = 0;
  local_138 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x19;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1405dec11:
    local_128 = *puVar5;
    uStack_120 = *(undefined4 *)(puVar5 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_128);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_b8) goto LAB_1405dec11;
  }
  local_50 = &local_b8;
  uVar8 = CONCAT44(uVar10,DAT_1419fcb88);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_138,1,uVar8,&local_50);
  uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_1405decb9:
      local_128 = *puVar5;
      uStack_120 = *(undefined4 *)(puVar5 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_128);
    }
    else {
      puVar5 = (undefined8 *)*param_5;
      if (puVar5 != &local_a8) goto LAB_1405decb9;
    }
    local_48 = &local_a8;
    local_128 = CONCAT44(uRam0000000141dd48cc,_DAT_141dd48c8);
    uStack_120 = uRam0000000141dd48d0;
    uStack_11c = DAT_141dd48d4;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_128);
    local_40 = local_98;
    ppuVar11 = &local_48;
    uVar9 = CONCAT44(uVar10,DAT_1419fcba8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_88,2,uVar9,ppuVar11);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_f8 = 0x1a;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      if (param_4 < 1) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)*param_5;
      }
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(puVar5,DAT_141a0a8a8,0x80000000,&local_78,uVar9,
                    (ulonglong)ppuVar11 & 0xffffffffffffff00);
      uVar10 = (undefined4)(uVar9 >> 0x20);
      if (puVar3 != &local_c8) {
        local_128 = *puVar3;
        uStack_120 = *(undefined4 *)(puVar3 + 1);
        uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_128);
      }
      local_58 = &local_c8;
      local_128 = local_78;
      uStack_120 = uStack_70;
      uStack_11c = uStack_6c;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_128);
      local_50 = &local_b8;
      if (param_4 < 1) {
        puVar3 = &DAT_1419df7b0;
      }
      else {
        puVar3 = (undefined8 *)*param_5;
      }
      ppuVar11 = &local_58;
      uVar9 = CONCAT44(uVar10,DAT_141a01138);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_138,2,uVar9,ppuVar11);
      iVar2 = FUN_140e851f0(uVar4,puVar3,DAT_141955260,0);
      if (iVar2 == 0) {
        local_f8 = 0x1c;
        if (param_4 < 1) {
          puVar3 = &DAT_1419df7b0;
        }
        else {
          puVar3 = (undefined8 *)*param_5;
        }
        uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(puVar3,DAT_141a0a8a8,0x80000000,&local_78,uVar9,uVar12);
        local_10c = DAT_141dd4dd4;
        local_110 = DAT_141dd4dd0;
        if ((1 << ((byte)DAT_141dd4dd4 & 0x1f) & 0x46U) == 0) {
          local_118 = DAT_141dd4dc8;
        }
        else {
          FUN_1400419b0(&local_118,&DAT_141dd4dc8);
        }
        uVar7 = 1 << ((byte)local_10c & 0x1f) & 0x46;
        uStack_120 = local_110;
        uStack_11c = local_10c;
        if (uVar7 == 0) {
          local_128 = local_118;
        }
        else {
          FUN_1400419b0(&local_128,&local_118);
        }
        FUN_1400460e0(&local_128,&local_78);
        local_e8 = (undefined8 *)local_128;
        uStack_e0 = (char *)CONCAT44(uStack_11c,uStack_120);
        if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_68);
        }
        FUN_140041b80(&local_68,&local_e8);
        if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        if (uVar7 != 0) {
          FUN_140041a50(&local_118);
        }
        local_f8 = 0x1d;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        local_138 = 0;
        local_130 = 0;
        local_12c = 5;
        if (0 < param_4) {
          puVar6 = (undefined8 *)*param_5;
        }
        FUN_140e87440(puVar6,DAT_141a0a8a8,0x80000000,&local_78,uVar9 & 0xffffffffffffff00,
                      uVar12 & 0xffffffffffffff00);
        local_10c = DAT_141dd4da4;
        local_110 = DAT_141dd4da0;
        if ((1 << ((byte)DAT_141dd4da4 & 0x1f) & 0x46U) == 0) {
          local_118 = DAT_141dd4d98;
        }
        else {
          FUN_1400419b0(&local_118,&DAT_141dd4d98);
        }
        uVar7 = 1 << ((byte)local_10c & 0x1f) & 0x46;
        uStack_120 = local_110;
        uStack_11c = local_10c;
        if (uVar7 == 0) {
          local_128 = local_118;
        }
        else {
          FUN_1400419b0(&local_128,&local_118);
        }
        FUN_1400460e0(&local_128,&local_78);
        local_e8 = (undefined8 *)local_128;
        uStack_e0 = (char *)CONCAT44(uStack_11c,uStack_120);
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_e8);
        if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        if (uVar7 != 0) {
          FUN_140041a50(&local_118);
        }
        local_58 = &local_c8;
        local_e8 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_e0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_e8);
        local_50 = &local_b8;
        uVar4 = gml_Script____struct___106(param_1,param_2,&local_138,2,&local_58);
        cVar1 = FUN_140e491e0(uVar4);
        if (cVar1 == '\0') {
          local_f8 = 0x1e;
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          local_138 = 0;
          local_130 = 0;
          local_12c = 5;
          local_e8 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
          uStack_e0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
          local_58 = &local_68;
          if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          FUN_140041b80(&local_b8,&local_e8);
          local_50 = &local_b8;
          uVar4 = gml_Script____struct___106(param_1,param_2,&local_138,2,&local_58);
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 == '\0') {
            local_f8 = 0x20;
            if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_138);
            }
            local_138 = 0;
            local_130 = 0;
            local_12c = 5;
            local_e8 = (undefined8 *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
            uStack_e0 = (char *)CONCAT44(uRam00000001419df7cc,uRam00000001419df7c8);
            local_58 = &local_68;
            if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_b8);
            }
            FUN_140041b80(&local_b8,&local_e8);
            local_50 = &local_b8;
            uStack_e0 = "gml_Script_savedata_set";
            local_e8 = DAT_141dc7a50;
            DAT_141dc7a50 = &local_e8;
            local_d8 = 8;
            uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
            local_12c = 5;
            local_138 = 0;
            local_d8 = 10;
            FUN_140e98ef0(param_1,param_2,uVar4,local_58,local_50);
            DAT_141dc7a50 = local_e8;
            local_f8 = 0x21;
            if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_138);
            }
            local_138 = 0;
            local_130 = 0;
            local_12c = 5;
            gml_Script_settings_save(param_1,param_2,&local_138,0,0);
            local_f8 = 0x22;
            if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_138);
            }
            local_138 = 0;
            local_130 = 0;
            local_12c = 5;
            gml_Script_add_trinket(param_1,param_2,&local_138,0,0);
          }
          else {
            local_f8 = 0x1e;
          }
        }
        else {
          local_f8 = 0x1d;
        }
      }
      else {
        local_f8 = 0x1a;
      }
      goto LAB_1405df3a3;
    }
  }
  local_f8 = 0x19;
LAB_1405df3a3:
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

