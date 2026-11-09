// gml_Script_anon_1619___InputVerbGroupSystem___InputVerbGroupSystem @ 0x1400e2170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1619___InputVerbGroupSystem___InputVerbGroupSystem
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  double local_178;
  uint local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong local_158;
  undefined4 local_14c;
  ulonglong local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  ulonglong local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  ulonglong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [12];
  undefined4 local_9c;
  undefined1 local_98 [12];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  double *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  
  local_110 = "gml_Script_anon@1732@anon@1619@__InputVerbGroupSystem@__InputVerbGroupSystem";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x26;
  _eh_vector_constructor_iterator_(local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0;
  local_168 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc918) &&
     (_Init_thread_header(&DAT_141ddc918), DAT_141ddc918 == -1)) {
    DAT_141ddc910 = (longlong *)FUN_140e63aa0(DAT_141a04068);
    _Init_thread_footer(&DAT_141ddc918);
  }
  if (DAT_141ddc069 == '\0') {
    FUN_140e64380(DAT_141ddc910,
                  "gml_Script_anon@1732@anon@1619@__InputVerbGroupSystem@__InputVerbGroupSystem");
    FUN_140e64380(param_1,
                  "gml_Script_anon@1732@anon@1619@__InputVerbGroupSystem@__InputVerbGroupSystem");
  }
  local_108 = 0x28;
  if (DAT_141ddc069 == '\0') {
    DAT_141ddc069 = '\x01';
    puVar5 = (ulonglong *)(**(code **)(*DAT_141ddc910 + 0x10))(DAT_141ddc910,DAT_141a04078);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uVar9 = 0;
    uVar6 = gml_Script___Update_anon_619___InputVibrateClassADSR___InputVibrateClassADSR
                      (param_1,param_2,&local_168,0,0);
    FUN_140e87440(uVar6,DAT_141a03fc8,0x80000000,&local_d8,uVar9 & 0xffffffffffffff00,0);
    FUN_140e609c0(DAT_141ddc910);
    if (&local_d8 != puVar5) {
      local_148 = local_d8;
      uStack_140 = uStack_d0;
      uStack_13c = uStack_cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_148);
    }
    FUN_140e60910(1);
    puVar5 = (ulonglong *)(**(code **)(*DAT_141ddc910 + 0x10))(DAT_141ddc910,DAT_141a04048);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar9 = 0;
    uVar6 = gml_Script___Update_anon_619___InputVibrateClassADSR___InputVibrateClassADSR
                      (param_1,param_2,&local_138,0,0);
    FUN_140e87440(uVar6,DAT_141a03fe8,0x80000000,&local_e8,uVar9 & 0xffffffffffffff00,0);
    FUN_140e609c0(DAT_141ddc910);
    if (&local_e8 != puVar5) {
      local_148 = local_e8;
      uStack_140 = uStack_e0;
      uStack_13c = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_148);
    }
    FUN_140e60910(1);
  }
  local_108 = 0x2c;
  puVar5 = (ulonglong *)(**(code **)(*DAT_141ddc910 + 8))(DAT_141ddc910,DAT_141a04048);
  if (param_4 < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*param_5;
  }
  iVar2 = FUN_140e4a740(puVar8);
  if (((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 2) && (uVar9 = *puVar5, uVar9 != 0)) {
    if ((iVar2 < 0) || (*(int *)(uVar9 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(uVar9 + 0x24));
      puVar5 = (ulonglong *)0x0;
    }
    else {
      puVar5 = (ulonglong *)((longlong)iVar2 * 0x10 + *(longlong *)(uVar9 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (puVar5 != &local_128) {
    local_148 = *puVar5;
    uStack_140 = (undefined4)puVar5[1];
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  local_108 = 0x2e;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 0;
  local_178 = 0.0;
  local_108 = 0x2f;
  plVar7 = (longlong *)(**(code **)(*DAT_141ddc910 + 8))(DAT_141ddc910,DAT_141a04078);
  iVar2 = 0;
  if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
    iVar2 = *(int *)(*plVar7 + 0x24);
  }
joined_r0x0001400e259b:
  do {
    if (iVar2 < 1) {
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      _eh_vector_destructor_iterator_(local_b8,0x10,4,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_118;
      return param_3;
    }
    iVar2 = iVar2 + -1;
    local_108 = 0x3e;
    plVar7 = (longlong *)(**(code **)(*DAT_141ddc910 + 8))(DAT_141ddc910,DAT_141a04078);
    iVar3 = FUN_140e4a740(&local_178);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != &local_158) {
      local_100 = (undefined4)*plVar7;
      uStack_fc = *(undefined4 *)((longlong)plVar7 + 4);
      uStack_f8 = (undefined4)plVar7[1];
      uStack_f4 = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_100);
    }
    local_108 = 0x3f;
    local_bc = 0;
    local_c8 = 0;
    iVar3 = FUN_140e851f0(&local_158,&local_c8,DAT_141955260,0);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if (iVar3 != 0) {
      uVar9 = FUN_140e4a8b0(&local_158);
      local_148 = FUN_140e4a8b0(&local_128);
      uStack_13c = 10;
      local_148 = local_148 & uVar9;
      iVar3 = FUN_140e851f0(&local_148,&local_158,DAT_141955260,0);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if (iVar3 == 0) {
        local_108 = 0x41;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_168 = 0;
        local_160 = 0;
        local_15c = 5;
        local_78 = &local_178;
        local_100 = _DAT_141dc6140;
        uStack_fc = uRam0000000141dc6144;
        uStack_f8 = uRam0000000141dc6148;
        uStack_f4 = uRam0000000141dc614c;
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_100);
        local_100 = _DAT_141dc6140;
        uStack_fc = uRam0000000141dc6144;
        uStack_f8 = uRam0000000141dc6148;
        uStack_f4 = uRam0000000141dc614c;
        local_70 = local_a8;
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_100);
        local_68 = local_98;
        if (param_4 < 1) {
          puVar8 = &DAT_1419df7b0;
LAB_1400e27e0:
          local_100 = *(undefined4 *)puVar8;
          uStack_fc = *(undefined4 *)((longlong)puVar8 + 4);
          uStack_f8 = *(undefined4 *)(puVar8 + 1);
          uStack_f4 = *(undefined4 *)((longlong)puVar8 + 0xc);
          if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_88);
          }
          FUN_140041b80(&local_88,&local_100);
        }
        else {
          puVar8 = (undefined8 *)*param_5;
          if (puVar8 != &local_88) goto LAB_1400e27e0;
        }
        local_60 = &local_88;
        gml_Script_InputPlugInVerbStateRead(param_1,param_2,&local_168,4,&local_78);
      }
    }
    local_108 = 0x45;
    uVar4 = local_16c & 0xffffff;
    if (uVar4 != 0) {
      if (uVar4 == 1) {
        local_178 = (double)FUN_140e4b060(&local_178);
        local_16c = 0;
        goto LAB_1400e288a;
      }
      if (uVar4 == 7) {
        local_178 = (double)CONCAT44(local_178._4_4_,local_178._0_4_ + 1);
      }
      else if (uVar4 == 10) {
        local_178 = (double)((longlong)local_178 + 1);
      }
      else {
        if (uVar4 == 0xd) {
          local_16c = 0;
          goto LAB_1400e288a;
        }
        FUN_140042910(&DAT_14172c3d8,&local_178,&local_178);
      }
      goto joined_r0x0001400e259b;
    }
LAB_1400e288a:
    local_178 = local_178 + 1.0;
  } while( true );
}

