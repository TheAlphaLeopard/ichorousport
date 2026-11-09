// gml_Script_anon_1741_gml_Object_oOfferingManager_Create_0 @ 0x140b82770

undefined8 *
gml_Script_anon_1741_gml_Object_oOfferingManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar5;
  undefined4 uVar7;
  ulonglong uVar6;
  undefined8 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 *local_138;
  undefined1 *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100 [2];
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_110 = "gml_Script_anon@734@gml_Object_oOfferingManager_Create_0";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x1d;
  pcVar5 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_100,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_6c = 0;
  local_78 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x1f;
  puVar3 = (undefined8 *)FUN_140e8da20(&local_78,local_res8,0);
  if (puVar3 != &local_158) {
    local_148 = (undefined1 *)*puVar3;
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_148);
  }
  local_108 = 0x20;
  uStack_13c = 0xf;
  local_148 = (undefined1 *)0x1000000000000d1;
  iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_148);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (0 < iVar2) {
    do {
      uVar7 = (undefined4)((ulonglong)pcVar5 >> 0x20);
      local_108 = 0x22;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f48c8);
      if (puVar3 != local_100) {
        local_128 = *(undefined4 *)puVar3;
        uStack_124 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_120 = *(undefined4 *)(puVar3 + 1);
        uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_100[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_100);
        }
        FUN_140041b80(local_100,&local_128);
      }
      local_138 = local_100;
      ppuVar8 = &local_138;
      pcVar5 = (code *)CONCAT44(uVar7,DAT_1419fcb88);
      uVar4 = FUN_140e634e0(local_res8,local_res10,&local_168,1,pcVar5,ppuVar8);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        local_108 = 0x22;
      }
      else {
        local_108 = 0x23;
        if (param_4 < 1) {
          puVar3 = &DAT_1419df7b0;
        }
        else {
          puVar3 = (undefined8 *)*param_5;
        }
        cVar1 = FUN_140e491e0(puVar3);
        if (cVar1 == '\0') {
          local_108 = 0x29;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          local_168 = 0;
          local_160 = 0;
          local_15c = 5;
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f48c8);
          uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
          uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
          FUN_140e87440(uVar4,DAT_1419f5d58,0x80000000,&local_a8,uVar6,uVar9);
          uVar6 = uVar6 & 0xffffffffffffff00;
          FUN_140e87440(&local_a8,DAT_141a0a8a8,0x80000000,&local_b8,uVar6,
                        uVar9 & 0xffffffffffffff00);
          uVar7 = (undefined4)(uVar6 >> 0x20);
          local_138 = &local_158;
          local_128 = (undefined4)local_b8;
          uStack_124 = local_b8._4_4_;
          uStack_120 = uStack_b0;
          uStack_11c = uStack_ac;
          if ((1 << (local_f0[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f0);
          }
          FUN_140041b80(local_f0,&local_128);
          local_130 = local_f0;
          ppuVar8 = &local_138;
          uVar6 = CONCAT44(uVar7,DAT_1419fe568);
          FUN_140e634e0(local_res8,local_res10,&local_168,2,uVar6,ppuVar8);
          local_108 = 0x2a;
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f48c8);
          uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
          pcVar5 = (code *)(uVar6 & 0xffffffffffffff00);
          FUN_140e87440(uVar4,DAT_1419f5ea8,0x80000000,&local_e0,pcVar5,uVar9);
          uStack_13c = 0;
          local_148 = &DAT_bff0000000000000;
          iVar2 = FUN_140e851f0(&local_e0,&local_148,DAT_141955260,0);
          if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          if (iVar2 == 0) goto LAB_140b82d2b;
          local_108 = 0x2b;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          local_168 = 0;
          local_160 = 0;
          local_15c = 5;
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f48c8);
          uVar9 = uVar9 & 0xffffffffffffff00;
          uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
          FUN_140e87440(uVar4,DAT_1419f5ea8,0x80000000,&local_e0,uVar6,uVar9);
          uVar6 = uVar6 & 0xffffffffffffff00;
          FUN_140e87440(&local_e0,DAT_141a0a8a8,0x80000000,&local_c8,uVar6,
                        uVar9 & 0xffffffffffffff00);
          uVar7 = (undefined4)(uVar6 >> 0x20);
          local_128 = (undefined4)local_c8;
          uStack_124 = local_c8._4_4_;
          uStack_120 = uStack_c0;
          uStack_11c = uStack_bc;
        }
        else {
          local_108 = 0x25;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          local_168 = 0;
          local_160 = 0;
          local_15c = 5;
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f48c8);
          uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
          uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
          FUN_140e87440(uVar4,DAT_1419f5ca8,0x80000000,&local_88,uVar6,uVar9);
          uVar6 = uVar6 & 0xffffffffffffff00;
          FUN_140e87440(&local_88,DAT_141a0a8a8,0x80000000,&local_98,uVar6,
                        uVar9 & 0xffffffffffffff00);
          uVar7 = (undefined4)(uVar6 >> 0x20);
          local_128 = (undefined4)local_98;
          uStack_124 = local_98._4_4_;
          uStack_120 = uStack_90;
          uStack_11c = uStack_8c;
        }
        local_138 = &local_158;
        if ((1 << (local_f0[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f0);
        }
        FUN_140041b80(local_f0,&local_128);
        local_130 = local_f0;
        pcVar5 = (code *)CONCAT44(uVar7,DAT_1419fe568);
        FUN_140e634e0(local_res8,local_res10,&local_168,2,pcVar5,&local_138);
      }
LAB_140b82d2b:
      cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  local_108 = 0x2e;
  if (&local_158 != param_3) {
    local_128 = (undefined4)local_158;
    uStack_124 = local_158._4_4_;
    uStack_120 = uStack_150;
    uStack_11c = uStack_14c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_128);
  }
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_100,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

