// gml_Script__once_anon_518___InputCollect___InputCollect @ 0x1400667e0

undefined8 *
gml_Script__once_anon_518___InputCollect___InputCollect
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_ffffffffffffff30;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [12];
  byte local_5c;
  longlong *local_58;
  undefined4 local_4c;
  undefined1 *local_48;
  longlong **local_40;
  
  local_a0 = "gml_Script___InputClassVirtualButton";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 2;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_68,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_84 = 0;
  local_90 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc424) {
    _Init_thread_header(&DAT_141ddc424);
    if (DAT_141ddc424 == -1) {
      DAT_141ddc3b0 = (longlong *)FUN_140e63aa0(DAT_1419fe4e8);
      _Init_thread_footer(&DAT_141ddc424);
    }
  }
  if (DAT_141ddc033 == '\0') {
    FUN_140e64380(DAT_141ddc3b0,"gml_Script___InputClassVirtualButton");
    FUN_140e64380(param_1,"gml_Script___InputClassVirtualButton");
  }
  FUN_140e643a0(param_1,DAT_141ddc3b0);
  local_98 = 4;
  if (DAT_141ddc033 == '\0') {
    DAT_141ddc033 = '\x01';
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc3b0);
    pcVar4 = (code *)0x0;
    puVar2 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_90,0,0);
    if (puVar2 != puVar1) {
      local_c8 = *puVar2;
      uStack_c0 = *(undefined4 *)(puVar2 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe498);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_DebugDraw_anon_2035___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe6c8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_Circle_anon_5393___InputClassVirtualButton___InputClassVirtualButton,0)
    ;
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe3c8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script____struct___3_GetPosition_anon_5927___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe2c8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetPosition_anon_5927___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe8a8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_HPad_anon_7087___InputClassVirtualButton___InputClassVirtualButton,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe758);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_VPad_anon_7464___InputClassVirtualButton___InputClassVirtualButton,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe3d8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_DPad_anon_7804___InputClassVirtualButton___InputClassVirtualButton,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe458);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_Thumbstick_anon_8231___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe898);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_Touchpad_anon_8604___InputClassVirtualButton___InputClassVirtualButton,
                  0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe7e8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetType_anon_8973___InputClassVirtualButton___InputClassVirtualButton,0
                 );
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe8c8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script____struct___4_GetVerbs_anon_9051___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe5a8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetVerbs_anon_9051___InputClassVirtualButton___InputClassVirtualButton,
                  0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe628);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script____struct___5_GetThreshold_anon_9744___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe408);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetThreshold_anon_9744___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe388);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetActive_anon_10292___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe308);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_Priority_anon_10372___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe468);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetPriority_anon_10665___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe6f8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_Follow_anon_10745___InputClassVirtualButton___InputClassVirtualButton,0
                 );
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe8e8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetFollow_anon_10915___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe548);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_ReleaseBehavior_anon_11002___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe618);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetReleaseBehavior_anon_11143___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe1a8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_FirstTouchOnly_anon_11238___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe738);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetFirstTouchOnly_anon_11485___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe378);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_ReferencePoint_anon_11579___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe3a8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetReferencePoint_anon_11713___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe7a8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_Momentary_anon_11797___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe2a8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetMomentary_anon_11924___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe8b8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_Pressed_anon_12067___InputClassVirtualButton___InputClassVirtualButton,
                  0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe1e8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_Check_anon_12214___InputClassVirtualButton___InputClassVirtualButton,0)
    ;
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe168);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_Released_anon_12342___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe518);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetX_anon_12488___InputClassVirtualButton___InputClassVirtualButton,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe5e8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetY_anon_12615___InputClassVirtualButton___InputClassVirtualButton,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe098);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetTouchX_anon_12747___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe8d8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetTouchY_anon_12874___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe648);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetTouchDX_anon_13002___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe258);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetTouchDY_anon_13185___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe868);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetTouchStartX_anon_13372___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe268);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetTouchStartY_anon_13509___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe3b8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script____struct___6_RecordHistory_anon_13706___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe2f8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_RecordHistory_anon_13706___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe588);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetHistoryDirection_anon_14995___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe068);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetHistoryDistance_anon_16000___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe608);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script_GetHistorySpeed_anon_17473___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe128);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script___ClearState_anon_17965___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe878);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script___CaptureTouchpoint_anon_19530___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe688);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script___Collect_anon_20753___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe638);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,
                  gml_Script___HistoryPush_anon_36180___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe288);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,gml_Script___InputClassVirtualButton,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc3b0 + 0x10))(DAT_141ddc3b0,DAT_1419fe4b8);
    FUN_140e609c0(DAT_141ddc3b0);
    FUN_140e645a0(&local_c8,gml_GlobalScript___InputCollect,0);
    if (&local_c8 != puVar1) {
      local_b8 = (undefined4)local_c8;
      uStack_b4 = local_c8._4_4_;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140e60910(1);
  }
  local_98 = 6;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  local_90 = 0;
  local_88 = 0;
  local_84 = 5;
  uVar3 = (**(code **)(*DAT_141ddc3b0 + 8))(DAT_141ddc3b0,DAT_1419fcb48);
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419fe0b8,0x80000000,&local_78,uVar5,
                in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar5 >> 0x20);
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = uStack_70;
  uStack_ac = uStack_6c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_b8);
  local_48 = local_68;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_4c = 6;
  local_58 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  local_40 = &local_58;
  FUN_140e634e0(param_1,param_2,&local_90,2,CONCAT44(uVar6,DAT_1419fe568),&local_48);
  local_98 = 0xd;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe108);
  uStack_bc = 0xd;
  local_c8 = 0;
  if (&local_c8 != puVar1) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_c0;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  local_98 = 0xf;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe668);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe418);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x11;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe4d8);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x12;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe228);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x13;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe678);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x14;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe278);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x15;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe3f8);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x16;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe328);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x17;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe528);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x18;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe368);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x19;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe188);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x1a;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe6d8);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x1b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe4a8);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x1c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe398);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x1e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd248);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 10;
  *puVar1 = 0;
  local_98 = 0x1f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe2e8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 10;
  *puVar1 = 0;
  local_98 = 0x20;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe0c8);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x21;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd0b8);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x22;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd008);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x23;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd108);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x24;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcfd8);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x26;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe238);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4049000000000000;
  local_98 = 0x27;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe298);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4059000000000000;
  local_98 = 0x29;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe4f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 10;
  *puVar1 = 0;
  local_98 = 0x2a;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe118);
  uStack_bc = 0xd;
  local_c8 = 0x3ff0000000000000;
  if (&local_c8 != puVar1) {
    local_b8 = 0;
    uStack_b4 = 0x3ff00000;
    uStack_b0 = uStack_c0;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  local_98 = 0x2b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe658);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_98 = 0x2c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe708);
  uStack_bc = 0xd;
  local_c8 = 0;
  if (&local_c8 != puVar1) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_c0;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  local_98 = 0x2d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe1b8);
  uStack_bc = 0xd;
  local_c8 = 0;
  if (&local_c8 != puVar1) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_c0;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  local_98 = 0x2e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe0d8);
  uStack_bc = 0xd;
  local_c8 = 0;
  if (&local_c8 != puVar1) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_c0;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  local_98 = 0x2f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe3e8);
  uStack_bc = 0xd;
  local_c8 = 0;
  if (&local_c8 != puVar1) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_c0;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  local_98 = 0x33;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe338);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x34;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fde28);
  uStack_bc = 0xd;
  local_c8 = 0;
  if (&local_c8 != puVar1) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_c0;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  local_98 = 0x35;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd828);
  uStack_bc = 0xd;
  local_c8 = 0;
  if (&local_c8 != puVar1) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_c0;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  local_98 = 0x36;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe348);
  uStack_bc = 0xd;
  local_c8 = 0;
  if (&local_c8 != puVar1) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_c0;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  local_98 = 0x37;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe428);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_98 = 0x38;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe888);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_98 = 0x39;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe7d8);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x3a;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe438);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x3b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe088);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x3c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe798);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x3d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe488);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x3e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_98 = 0x3f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe6a8);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

