// gml_Script___Update_anon_619___InputVibrateClassADSR___InputVibrateClassADSR @ 0x1400e3520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___Update_anon_619___InputVibrateClassADSR___InputVibrateClassADSR
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  uint local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8 [2];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined4 local_70 [3];
  undefined4 local_64;
  undefined1 local_60 [16];
  longlong local_50;
  
  local_res18 = 0;
  local_120 = "gml_Script___InputVerbGroupSystem";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 8;
  uVar8 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_f8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc91c) &&
     (_Init_thread_header(&DAT_141ddc91c), DAT_141ddc91c == -1)) {
    DAT_141ddc908 = (longlong *)FUN_140e63aa0(DAT_141a04088);
    _Init_thread_footer(&DAT_141ddc91c);
  }
  if (DAT_141ddc06a == '\0') {
    FUN_140e64380(DAT_141ddc908,"gml_Script___InputVerbGroupSystem");
    FUN_140e64380(local_res8,"gml_Script___InputVerbGroupSystem");
  }
  local_118 = 10;
  if (DAT_141ddc06a == '\0') {
    DAT_141ddc06a = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc908 + 0x10))(DAT_141ddc908,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc908);
    if (puVar3 != &DAT_1419df7b0) {
      local_108 = (undefined4)DAT_1419df7b0;
      uStack_104 = DAT_1419df7b0._4_4_;
      uStack_100 = DAT_1419df7b8;
      uStack_fc = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_108);
    }
    FUN_140e60910(1);
  }
  local_118 = 0xb;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc908 + 8))(DAT_141ddc908,DAT_1419fcb48);
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_118 = 0xd;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar4 = (undefined4 *)(**(code **)(*DAT_141ddc908 + 0x10))(DAT_141ddc908,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc908);
    puVar5 = (undefined4 *)
             FUN_140e634e0(local_res8,local_res10,&local_158,0,CONCAT44(uVar8,DAT_1419fd6d8),0);
    if (puVar5 != puVar4) {
      local_108 = *puVar5;
      uStack_104 = puVar5[1];
      uStack_100 = puVar5[2];
      uStack_fc = puVar5[3];
      if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_108);
    }
    FUN_140e60910(1);
    local_118 = 0xe;
    iVar2 = FUN_140e63cb0(local_60,&local_res8,&local_res10,puVar3);
    if (0 < iVar2) {
      do {
        (**(code **)(*DAT_141ddc908 + 8))(DAT_141ddc908,DAT_1419fcb48);
        local_118 = 0x11;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        (**(code **)(*DAT_141ddc908 + 8))(DAT_141ddc908,DAT_1419fcb48);
        uVar8 = 0;
        plVar6 = (longlong *)gml_Script_InputPlugInGetFrame(local_res8,local_res10,&local_158,0,0);
        if (plVar6 != &local_138) {
          local_148 = (undefined4)*plVar6;
          uStack_144 = *(undefined4 *)((longlong)plVar6 + 4);
          uStack_140 = (undefined4)plVar6[1];
          uStack_13c = *(undefined4 *)((longlong)plVar6 + 0xc);
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140041b80(&local_138,&local_148);
        }
        local_118 = 0x15;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        local_98 = &local_138;
        local_148 = _DAT_1419df7a0;
        uStack_144 = uRam00000001419df7a4;
        uStack_140 = uRam00000001419df7a8;
        uStack_13c = uRam00000001419df7ac;
        if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_148);
        local_90 = local_e8;
        uVar7 = CONCAT44(uVar8,DAT_141a02658);
        FUN_140e634e0(local_res8,local_res10,&local_158,2,uVar7,&local_98);
        uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_118 = 0x1a;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        puVar4 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a03fc8);
        plVar6 = (longlong *)0x0;
        if (((local_12c & 0xffffff) == 2) && (local_138 != 0)) {
          if (*(int *)(local_138 + 0x24) < 1) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
          }
          else {
            plVar6 = *(longlong **)(local_138 + 8);
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          plVar6 = &local_138;
        }
        uStack_9c = *(undefined4 *)((longlong)plVar6 + 0xc);
        uStack_a0 = (int)plVar6[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
          local_a8 = *plVar6;
        }
        else {
          FUN_1400419b0(&local_a8,plVar6);
        }
        local_res18 = 1;
        local_64 = 7;
        local_70[0] = 1;
        FUN_1400460e0(&local_a8,local_70);
        if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_70);
        }
        local_148 = (undefined4)local_a8;
        uStack_144 = local_a8._4_4_;
        uStack_140 = uStack_a0;
        uStack_13c = uStack_9c;
        if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_148);
        local_res18 = 0;
        if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        local_98 = local_f8;
        local_148 = _DAT_141dc6140;
        uStack_144 = uRam0000000141dc6144;
        uStack_140 = uRam0000000141dc6148;
        uStack_13c = uRam0000000141dc614c;
        if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_148);
        local_90 = local_e8;
        FUN_140e609c0(local_res8);
        uVar7 = CONCAT44(uVar8,DAT_1419fd218);
        puVar5 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_158,2,uVar7,&local_98);
        uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if (puVar5 != puVar4) {
          local_148 = *puVar5;
          uStack_144 = puVar5[1];
          uStack_140 = puVar5[2];
          uStack_13c = puVar5[3];
          if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_148);
        }
        FUN_140e60910(1);
        local_118 = 0x1e;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        puVar4 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a03fe8);
        local_148 = _DAT_1419e1c90;
        uStack_144 = uRam00000001419e1c94;
        uStack_140 = uRam00000001419e1c98;
        uStack_13c = uRam00000001419e1c9c;
        if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_148);
        local_98 = local_f8;
        local_148 = _DAT_141dc6140;
        uStack_144 = uRam0000000141dc6144;
        uStack_140 = uRam0000000141dc6148;
        uStack_13c = uRam0000000141dc614c;
        if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_148);
        local_90 = local_e8;
        FUN_140e609c0(local_res8);
        puVar5 = (undefined4 *)
                 FUN_140e634e0(local_res8,local_res10,&local_158,2,CONCAT44(uVar8,DAT_1419fd218),
                               &local_98);
        if (puVar5 != puVar4) {
          local_148 = *puVar5;
          uStack_144 = puVar5[1];
          uStack_140 = puVar5[2];
          uStack_13c = puVar5[3];
          if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_148);
        }
        FUN_140e60910(1);
        local_118 = 0x21;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_118 = 0x24;
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        local_148 = _DAT_141dcb2c8;
        uStack_144 = uRam0000000141dcb2cc;
        uStack_140 = uRam0000000141dcb2d0;
        uStack_13c = DAT_141dcb2d4;
        if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_148);
        local_98 = local_f8;
        local_148 = _DAT_141dcb2d8;
        uStack_144 = uRam0000000141dcb2dc;
        uStack_140 = uRam0000000141dcb2e0;
        uStack_13c = DAT_141dcb2e4;
        if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_148);
        local_90 = local_e8;
        local_148 = _DAT_141dcb2a8;
        uStack_144 = uRam0000000141dcb2ac;
        uStack_140 = uRam0000000141dcb2b0;
        uStack_13c = DAT_141dcb2b4;
        if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_148);
        local_88 = local_d8;
        local_148 = _DAT_141dcb2b8;
        uStack_144 = uRam0000000141dcb2bc;
        uStack_140 = uRam0000000141dcb2c0;
        uStack_13c = DAT_141dcb2c4;
        if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_148);
        local_80 = local_c8;
        FUN_140e645a0(&local_108,gml_GlobalScript___InputVibrateClassADSR,local_res8);
        local_148 = local_108;
        uStack_144 = uStack_104;
        uStack_140 = uStack_100;
        uStack_13c = uStack_fc;
        if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_148);
        if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_78 = local_b8;
        gml_Script_InputPlugInError(local_res8,local_res10,&local_158,5,&local_98);
        cVar1 = FUN_140e643f0(local_60,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_60,&local_res8,&local_res10);
    local_118 = 0x68;
    if (puVar3 != param_3) {
      local_148 = *(undefined4 *)puVar3;
      uStack_144 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_140 = *(undefined4 *)(puVar3 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_148);
    }
    if (local_50 != 0) {
      FUN_140e4cd60();
      local_50 = 0;
    }
  }
  else {
    local_118 = 0xb;
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc908 + 8))(DAT_141ddc908,DAT_1419fcb48);
    if (puVar3 != param_3) {
      local_108 = *(undefined4 *)puVar3;
      uStack_104 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_100 = *(undefined4 *)(puVar3 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_108);
    }
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

