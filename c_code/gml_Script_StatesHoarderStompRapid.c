// gml_Script_StatesHoarderStompRapid @ 0x1405550d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesHoarderStompRapid
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_100 = "gml_Script_StatesHoarderPlugged";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x2a7;
  _eh_vector_constructor_iterator_(&local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_13c = 0;
  local_148 = 0;
  local_e4 = 0;
  local_f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x2a9;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_6c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_70 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
    local_78 = *param_5;
  }
  else {
    FUN_1400419b0(&local_78);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddfdc0) &&
     (_Init_thread_header(&DAT_141ddfdc0), DAT_141ddfdc0 == -1)) {
    _DAT_141ddfe3c = 0;
    _DAT_141ddfe30 = 0x4000000000000000;
    _DAT_141ddfe50 = 0;
    _DAT_141ddfe44 = 0;
    _DAT_141ddfe54 = 1;
    _DAT_141ddfe64 = 0;
    _DAT_141ddfe58 = 0x3ff0000000000000;
    _DAT_141ddfe68 = 2;
    _DAT_141ddfe78 = 0;
    _DAT_141ddfe6c = 0x4008000000000000;
    _DAT_141ddfe7c = 3;
    atexit((_func_5014 *)&LAB_141482030);
    _Init_thread_footer(&DAT_141ddfdc0);
  }
  uVar7 = 0;
  do {
    iVar2 = FUN_140e851f0(&DAT_141ddfe30 + (longlong)(int)uVar7 * 0x14,&local_78,DAT_141955260,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(&DAT_141ddfe40 + (longlong)(int)uVar7 * 0x14);
      if (iVar2 == 0) {
        local_f8 = 0x2ad;
        uStack_12c = 0xf;
        local_138 = 0x100000100000175;
        local_118 = 0x175;
        uStack_114 = 0x1000001;
        uStack_110 = uStack_130;
        uStack_10c = 0xf;
        if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d0);
        }
        FUN_140041b80(&local_d0,&local_118);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_d0);
        local_f8 = 0x2ae;
        if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e0);
        }
        local_d4 = 0;
        local_e0 = 0;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_e0);
        local_f8 = 0x2af;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_11c = 0;
        local_128 = 0x3ff0000000000000;
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_128);
        local_f8 = 0x2b1;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        FUN_140e609c0(param_1);
        uStack_12c = 0;
        local_138 = 0xc000000000000000;
        FUN_140042560(&local_138,uVar4);
        if (&local_138 != puVar3) {
          local_118 = (undefined4)local_138;
          uStack_114 = local_138._4_4_;
          uStack_110 = uStack_130;
          uStack_10c = uStack_12c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_118);
        }
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140e60910(1);
        local_f8 = 0x2b3;
      }
      else if (iVar2 == 1) {
        local_f8 = 0x2b7;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        if (puVar5 != &local_b8) {
          local_138 = *puVar5;
          uStack_130 = *(undefined4 *)(puVar5 + 1);
          uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          FUN_140041b80(&local_b8,&local_138);
        }
        local_68 = &local_b8;
        local_138 = CONCAT44(uRam0000000141dc66e4,_DAT_141dc66e0);
        uStack_130 = uRam0000000141dc66e8;
        uStack_12c = uRam0000000141dc66ec;
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_138);
        local_60 = local_a8;
        local_138 = CONCAT44(uRam00000001419e6394,_DAT_1419e6390);
        uStack_130 = uRam00000001419e6398;
        uStack_12c = uRam00000001419e639c;
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_138);
        local_58 = local_98;
        FUN_140e609c0(param_1);
        puVar5 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_148,3,&local_68);
        if (puVar5 != puVar6) {
          local_138 = *puVar5;
          uStack_130 = *(undefined4 *)(puVar5 + 1);
          uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_138);
        }
        FUN_140e60910(1);
        local_f8 = 0x2b9;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        uStack_12c = 0xf;
        local_138 = 0x100000100000175;
        local_118 = 0x175;
        uStack_114 = 0x1000001;
        uStack_110 = uStack_130;
        uStack_10c = 0xf;
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_118);
        local_68 = &local_b8;
        local_118 = (undefined4)DAT_1419df7b0;
        uStack_114 = DAT_1419df7b0._4_4_;
        uStack_110 = DAT_1419df7b8;
        uStack_10c = DAT_1419df7bc;
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_118);
        local_60 = local_a8;
        uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_148,2,&local_68);
        cVar1 = FUN_140e491e0(uVar4);
        if (cVar1 != '\0') {
          local_f8 = 699;
          if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f0);
          }
          local_f0 = 0;
          local_e8 = 0;
          local_e4 = 5;
          local_118 = _DAT_1419e6330;
          uStack_114 = uRam00000001419e6334;
          uStack_110 = uRam00000001419e6338;
          uStack_10c = uRam00000001419e633c;
          if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_98);
          }
          FUN_140041b80(local_98,&local_118);
          local_58 = local_98;
          local_118 = (undefined4)DAT_1419df7b0;
          uStack_114 = DAT_1419df7b0._4_4_;
          uStack_110 = DAT_1419df7b8;
          uStack_10c = DAT_1419df7bc;
          if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_88);
          }
          FUN_140041b80(local_88,&local_118);
          local_50 = local_88;
          gml_Script_truestate_begin_step(param_1,param_2,&local_f0,2,&local_58);
        }
        local_f8 = 0x2bf;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
        FUN_140e63610(param_1,param_2,&local_148,0,uVar4,0);
        local_f8 = 0x2c0;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
        FUN_140e63610(param_1,param_2,&local_148,0,uVar4,0);
        local_f8 = 0x2c2;
        if (puVar3 != &local_128) {
          local_118 = *(undefined4 *)puVar3;
          uStack_114 = *(undefined4 *)((longlong)puVar3 + 4);
          uStack_110 = *(undefined4 *)(puVar3 + 1);
          uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          FUN_140041b80(&local_128,&local_118);
        }
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_128);
        local_f8 = 0x2c4;
      }
      else if (iVar2 == 2) {
        local_f8 = 0x2c8;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_148,0,uVar4,0);
        local_f8 = 0x2c9;
      }
      else if (iVar2 == 3) {
        local_f8 = 0x2cd;
      }
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

