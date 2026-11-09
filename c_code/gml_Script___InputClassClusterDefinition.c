// gml_Script___InputClassClusterDefinition @ 0x140042f00

undefined8 *
gml_Script___InputClassClusterDefinition
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  local_d0 = "gml_Script___InputBindingScan";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 7;
  _eh_vector_constructor_iterator_(&local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_11c = 0;
  local_128 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc1b8) &&
     (_Init_thread_header(&DAT_141ddc1b8), DAT_141ddc1b8 == -1)) {
    DAT_141ddc1b0 = (longlong *)FUN_140e63aa0(DAT_1419fca48);
    _Init_thread_footer(&DAT_141ddc1b8);
  }
  if (DAT_141dc5fcc == '\0') {
    FUN_140e64380(DAT_141ddc1b0,"gml_Script___InputBindingScan");
    FUN_140e64380(param_1,"gml_Script___InputBindingScan");
  }
  local_c8 = 9;
  if (DAT_141dc5fcc == '\0') {
    DAT_141dc5fcc = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc1b0 + 0x10))(DAT_141ddc1b0,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc1b0);
    puVar4 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_128,0,0);
    if (puVar4 != puVar3) {
      local_e8 = *puVar4;
      uStack_e0 = *(undefined4 *)(puVar4 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_e8);
    }
    FUN_140e60910(1);
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc1b0 + 0x10))(DAT_141ddc1b0,DAT_1419fcb38);
    FUN_140e609c0(DAT_141ddc1b0);
    FUN_140e645a0(&local_e8,gml_GlobalScript___InputClassCluster,0);
    if (&local_e8 != puVar3) {
      local_118._0_4_ = (undefined4)local_e8;
      local_118._4_4_ = local_e8._4_4_;
      uStack_110 = uStack_e0;
      uStack_10c = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_118);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
  }
  local_c8 = 0x12;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  uStack_dc = 0;
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0xc0590000;
  iVar2 = FUN_140e851f0(puVar4,&local_e8,DAT_141955260,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (iVar2 == 0) {
    local_c8 = 0x16;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar3 = (undefined8 *)gml_Script___InputGetMouseActive(param_1,param_2,&local_f8,0,0);
    if (puVar3 != &local_108) {
      local_118._0_4_ = *(undefined4 *)puVar3;
      local_118._4_4_ = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_110 = *(undefined4 *)(puVar3 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_118);
    }
    local_c8 = 0x17;
    iVar2 = FUN_140e851f0(&local_108,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar2 == 0) {
LAB_1400433b2:
      local_c8 = 0x1f;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      puVar3 = (undefined8 *)
               gml_Script___InputGetPS5InitialUserDevice(param_1,param_2,&local_128,0,0);
      if (puVar3 != &local_108) {
        local_118._0_4_ = *(undefined4 *)puVar3;
        local_118._4_4_ = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_110 = *(undefined4 *)(puVar3 + 1);
        uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_118);
      }
      local_c8 = 0x20;
      iVar2 = FUN_140e851f0(&local_108,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar2 == 0) goto LAB_140043979;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uVar5 = (**(code **)(*DAT_141ddc1b0 + 8))(DAT_141ddc1b0,DAT_1419fcb38);
      local_68 = &local_108;
      if (param_4 < 2) {
        puVar3 = &DAT_1419df7b0;
LAB_1400434c1:
        local_118._0_4_ = *(undefined4 *)puVar3;
        local_118._4_4_ = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_110 = *(undefined4 *)(puVar3 + 1);
        uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_118);
      }
      else {
        puVar3 = (undefined8 *)param_5[1];
        if (puVar3 != &local_a8) goto LAB_1400434c1;
      }
      local_60 = &local_a8;
      if (param_4 < 3) {
        puVar3 = &DAT_1419df7b0;
LAB_14004350e:
        local_118._0_4_ = *(undefined4 *)puVar3;
        local_118._4_4_ = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_110 = *(undefined4 *)(puVar3 + 1);
        uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_118);
      }
      else {
        puVar3 = (undefined8 *)param_5[2];
        if (puVar3 != &local_98) goto LAB_14004350e;
      }
      local_58 = &local_98;
      uVar5 = FUN_140e63610(param_1,param_2,&local_128,3,uVar5,&local_68);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 == '\0') goto LAB_140043979;
      local_c8 = 0x22;
    }
    else {
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uVar5 = (**(code **)(*DAT_141ddc1b0 + 8))(DAT_141ddc1b0,DAT_1419fcb38);
      local_68 = &local_108;
      if (param_4 < 2) {
        puVar3 = &DAT_1419df7b0;
LAB_1400432d7:
        local_118._0_4_ = *(undefined4 *)puVar3;
        local_118._4_4_ = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_110 = *(undefined4 *)(puVar3 + 1);
        uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_118);
      }
      else {
        puVar3 = (undefined8 *)param_5[1];
        if (puVar3 != &local_a8) goto LAB_1400432d7;
      }
      local_60 = &local_a8;
      if (param_4 < 3) {
        puVar3 = &DAT_1419df7b0;
LAB_140043324:
        local_118._0_4_ = *(undefined4 *)puVar3;
        local_118._4_4_ = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_110 = *(undefined4 *)(puVar3 + 1);
        uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_118);
      }
      else {
        puVar3 = (undefined8 *)param_5[2];
        if (puVar3 != &local_98) goto LAB_140043324;
      }
      local_58 = &local_98;
      uVar5 = FUN_140e63610(param_1,param_2,&local_128,3,uVar5,&local_68);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 == '\0') goto LAB_1400433b2;
      local_c8 = 0x19;
    }
    if (&local_108 == param_3) goto LAB_1400439b5;
    local_118._0_4_ = (undefined4)local_108;
    local_118._4_4_ = local_108._4_4_;
    uStack_110 = uStack_100;
    uStack_10c = uStack_fc;
  }
  else {
    local_c8 = 0x26;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_1400435cb:
      local_118._0_4_ = *(undefined4 *)puVar4;
      local_118._4_4_ = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_110 = *(undefined4 *)(puVar4 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_118);
    }
    else {
      puVar4 = (undefined8 *)*param_5;
      if (puVar4 != &local_b8) goto LAB_1400435cb;
    }
    local_68 = &local_b8;
    uVar5 = gml_Script_InputDeviceSetRebinding(param_1,param_2,&local_128,1,&local_68);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 != '\0') {
      local_c8 = 0x2a;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      if (param_4 < 1) {
        puVar4 = &DAT_1419df7b0;
LAB_140043679:
        local_118._0_4_ = *(undefined4 *)puVar4;
        local_118._4_4_ = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_110 = *(undefined4 *)(puVar4 + 1);
        uStack_10c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_118);
      }
      else {
        puVar4 = (undefined8 *)*param_5;
        if (puVar4 != &local_a8) goto LAB_140043679;
      }
      local_60 = &local_a8;
      puVar4 = (undefined8 *)
               gml_Script___InputGetKeyboardActive(param_1,param_2,&local_f8,1,&local_60);
      if (puVar4 != &local_108) {
        local_118._0_4_ = *(undefined4 *)puVar4;
        local_118._4_4_ = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_110 = *(undefined4 *)(puVar4 + 1);
        uStack_10c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_118);
      }
      local_c8 = 0x2b;
      iVar2 = FUN_140e851f0(&local_108,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar2 != 0) {
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        uVar5 = (**(code **)(*DAT_141ddc1b0 + 8))(DAT_141ddc1b0,DAT_1419fcb38);
        local_68 = &local_108;
        if (param_4 < 2) {
          puVar4 = &DAT_1419df7b0;
LAB_14004378e:
          local_118._0_4_ = *(undefined4 *)puVar4;
          local_118._4_4_ = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_110 = *(undefined4 *)(puVar4 + 1);
          uStack_10c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a8);
          }
          FUN_140041b80(&local_a8,&local_118);
        }
        else {
          puVar4 = (undefined8 *)param_5[1];
          if (puVar4 != &local_a8) goto LAB_14004378e;
        }
        local_60 = &local_a8;
        if (param_4 < 3) {
          puVar4 = &DAT_1419df7b0;
LAB_1400437db:
          local_118._0_4_ = *(undefined4 *)puVar4;
          local_118._4_4_ = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_110 = *(undefined4 *)(puVar4 + 1);
          uStack_10c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_98);
          }
          FUN_140041b80(&local_98,&local_118);
        }
        else {
          puVar4 = (undefined8 *)param_5[2];
          if (puVar4 != &local_98) goto LAB_1400437db;
        }
        local_58 = &local_98;
        uVar5 = FUN_140e63610(param_1,param_2,&local_128,3,uVar5,&local_68);
        cVar1 = FUN_140e491e0(uVar5);
        if (cVar1 != '\0') {
          local_c8 = 0x2d;
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          local_f8 = 0;
          local_f0 = 0;
          local_ec = 5;
          if ((param_4 < 1) || (puVar3 = (undefined8 *)*param_5, puVar3 != &local_88)) {
            local_118._0_4_ = *(undefined4 *)puVar3;
            local_118._4_4_ = *(undefined4 *)((longlong)puVar3 + 4);
            uStack_110 = *(undefined4 *)(puVar3 + 1);
            uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
            if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_88);
            }
            FUN_140041b80(&local_88,&local_118);
          }
          local_50 = &local_88;
          local_48 = &local_108;
          puVar3 = (undefined8 *)
                   gml_Script_InputDeviceGetNewActivity(param_1,param_2,&local_f8,2,&local_50);
          if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
            uVar6 = (undefined4)*puVar3;
          }
          else {
            uVar6 = FUN_140e4b060(puVar3);
          }
          local_e8 = FUN_140e79500(uVar6);
          uStack_dc = 0;
          FUN_140042560(&local_e8,&local_108);
          if (&local_e8 != param_3) {
            uStack_110 = uStack_e0;
            uStack_10c = uStack_dc;
            local_118 = local_e8;
            if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(param_3);
            }
            FUN_140041b80(param_3,&local_118);
          }
          if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          goto LAB_1400439b5;
        }
      }
    }
LAB_140043979:
    local_c8 = 0x32;
    if (param_3 == &DAT_1419df7b0) goto LAB_1400439b5;
    local_118._0_4_ = (undefined4)DAT_1419df7b0;
    local_118._4_4_ = DAT_1419df7b0._4_4_;
    uStack_110 = DAT_1419df7b8;
    uStack_10c = DAT_1419df7bc;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  FUN_140041b80(param_3,&local_118);
LAB_1400439b5:
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

