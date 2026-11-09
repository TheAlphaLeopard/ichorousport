// gml_Script_GetHistoryDirection_anon_14995___InputClassVirtualButton___InputClassVirtualButton @ 0x14005d700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_GetHistoryDirection_anon_14995___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 uVar12;
  undefined8 uVar11;
  double local_e8;
  uint local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [4];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined4 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_a0 = 
  "gml_Script_RecordHistory@anon@13706@__InputClassVirtualButton@__InputClassVirtualButton";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x21e;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0.0;
  puVar5 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fe6b8);
  local_bc = 0;
  local_c8 = 0;
  local_84 = 0;
  local_90 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x220;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe108);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_98 = 0x222;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe1b8);
    FUN_140e609c0(param_1);
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    if (param_5 != puVar7) {
      local_d8 = *(undefined4 *)param_5;
      uStack_d4 = *(undefined4 *)((longlong)param_5 + 4);
      uStack_d0 = *(undefined4 *)(param_5 + 1);
      uStack_cc = *(undefined4 *)((longlong)param_5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_d8);
    }
    FUN_140e60910(1);
    local_98 = 0x225;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe1b8);
    puVar8 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe488);
    if (puVar8 != local_80) {
      local_d8 = *puVar8;
      uStack_d4 = puVar8[1];
      uStack_d0 = puVar8[2];
      uStack_cc = puVar8[3];
      if ((1 << ((byte)local_80[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_80);
      }
      FUN_140041b80(local_80,&local_d8);
    }
    local_50 = local_80;
    uVar11 = CONCAT44(uVar12,DAT_1419fdb88);
    uVar9 = FUN_140e634e0(param_1,param_2,&local_c8,1,uVar11,&local_50);
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    iVar2 = FUN_140e851f0(uVar6,uVar9,DAT_141955260,0);
    if (iVar2 != 0) {
      local_98 = 0x227;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe1b8);
      cVar1 = FUN_140e491e0(uVar6);
      if (cVar1 == '\0') {
        local_98 = 0x23b;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe488);
        FUN_140e609c0(param_1);
        if (puVar7 != &DAT_1419df7b0) {
          local_b8 = (undefined4)DAT_1419df7b0;
          uStack_b4 = DAT_1419df7b0._4_4_;
          uStack_b0 = DAT_1419df7b8;
          uStack_ac = DAT_1419df7bc;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_b8);
        }
        FUN_140e60910(1);
        local_98 = 0x23c;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe848);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0;
      }
      else {
        local_98 = 0x229;
        if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_90);
        }
        local_90 = 0;
        local_88 = 0;
        local_84 = 5;
        puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe488);
        local_d8 = _DAT_1419df8d0;
        uStack_d4 = uRam00000001419df8d4;
        uStack_d0 = uRam00000001419df8d8;
        uStack_cc = uRam00000001419df8dc;
        if ((1 << (local_70[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_70);
        }
        FUN_140041b80(local_70,&local_d8);
        local_48 = local_70;
        local_d8 = (undefined4)DAT_1419df7b0;
        uStack_d4 = DAT_1419df7b0._4_4_;
        uStack_d0 = DAT_1419df7b8;
        uStack_cc = DAT_1419df7bc;
        if ((1 << (local_60[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_60);
        }
        FUN_140041b80(local_60,&local_d8);
        local_40 = local_60;
        FUN_140e609c0(param_1);
        uVar6 = CONCAT44(uVar12,DAT_1419fd218);
        puVar10 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_90,2,uVar6,&local_48);
        if (puVar10 != puVar8) {
          local_d8 = *puVar10;
          uStack_d4 = puVar10[1];
          uStack_d0 = puVar10[2];
          uStack_cc = puVar10[3];
          if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar8);
          }
          FUN_140041b80(puVar8,&local_d8);
        }
        FUN_140e60910(1);
        local_98 = 0x22a;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe848);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0;
        local_98 = 0x22d;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_dc = 0;
        local_e8 = 0.0;
        iVar2 = 0xb;
        do {
          uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
          iVar2 = iVar2 + -1;
          local_98 = 0x230;
          if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          local_c8 = 0;
          local_c0 = 0;
          local_bc = 5;
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe488);
          FUN_140e609c0(DAT_141a729d8);
          FUN_140e645a0(&local_d8,
                        gml_Script_GetHistory_anon_14844___InputClassVirtualButton___InputClassVirtualButton
                        ,0);
          if (&local_d8 != puVar5) {
            local_b8 = local_d8;
            uStack_b4 = uStack_d4;
            uStack_b0 = uStack_d0;
            uStack_ac = uStack_cc;
            if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            FUN_140041b80(puVar5,&local_b8);
          }
          FUN_140e60910(1);
          if (puVar5 != local_80) {
            local_b8 = *puVar5;
            uStack_b4 = puVar5[1];
            uStack_b0 = puVar5[2];
            uStack_ac = puVar5[3];
            if ((1 << ((byte)local_80[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_80);
            }
            FUN_140041b80(local_80,&local_b8);
          }
          if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          local_50 = local_80;
          local_b8 = (undefined4)DAT_1419df7b0;
          uStack_b4 = DAT_1419df7b0._4_4_;
          uStack_b0 = DAT_1419df7b8;
          uStack_ac = DAT_1419df7bc;
          if ((1 << (local_70[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_70);
          }
          FUN_140041b80(local_70,&local_b8);
          local_48 = local_70;
          local_b8 = (undefined4)DAT_1419df7b0;
          uStack_b4 = DAT_1419df7b0._4_4_;
          uStack_b0 = DAT_1419df7b8;
          uStack_ac = DAT_1419df7bc;
          if ((1 << (local_60[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_60);
          }
          FUN_140041b80(local_60,&local_b8);
          local_40 = local_60;
          FUN_140e609c0(param_1);
          uVar3 = FUN_140e4a740(&local_e8);
          puVar8 = (undefined4 *)FUN_140e48e40(puVar7,uVar3);
          FUN_140e609c0(*(undefined8 *)*puVar7);
          uVar6 = CONCAT44(uVar12,DAT_1419fd6d8);
          puVar10 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_c8,3,uVar6,&local_50);
          if (puVar10 != puVar8) {
            local_b8 = *puVar10;
            uStack_b4 = puVar10[1];
            uStack_b0 = puVar10[2];
            uStack_ac = puVar10[3];
            if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar8);
            }
            FUN_140041b80(puVar8,&local_b8);
          }
          FUN_140e60910(2);
          local_98 = 0x235;
          uVar4 = local_dc & 0xffffff;
          if (uVar4 == 0) {
LAB_14005dd83:
            local_e8 = local_e8 + 1.0;
          }
          else {
            if (uVar4 == 1) {
              local_e8 = (double)FUN_140e4b060(&local_e8);
              local_dc = 0;
              goto LAB_14005dd83;
            }
            if (uVar4 == 7) {
              local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
            }
            else if (uVar4 == 10) {
              local_e8 = (double)((longlong)local_e8 + 1);
            }
            else {
              if (uVar4 == 0xd) {
                local_dc = 0;
                goto LAB_14005dd83;
              }
              FUN_140042910(&DAT_14172c3d8,&local_e8);
            }
          }
        } while (0 < iVar2);
      }
    }
    local_98 = 0x240;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 6;
    *param_3 = param_1;
    uVar6 = FUN_140e5c910();
    FUN_140e42c10(uVar6,param_1);
  }
  else {
    local_98 = 0x220;
    if (param_3 != &DAT_1419df7b0) {
      local_d8 = (undefined4)DAT_1419df7b0;
      uStack_d4 = DAT_1419df7b0._4_4_;
      uStack_d0 = DAT_1419df7b8;
      uStack_cc = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_d8);
    }
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

