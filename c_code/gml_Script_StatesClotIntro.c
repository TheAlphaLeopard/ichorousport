// gml_Script_StatesClotIntro @ 0x140517d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesClotIntro
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *local_res18;
  undefined4 local_res20;
  code *pcVar7;
  undefined4 uVar9;
  ulonglong uVar8;
  undefined8 **ppuVar10;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  byte local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  
  local_res20 = 0;
  local_e0 = "gml_Script_StatesBodyBagDeath";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x1d;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_d0,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x1f;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_74 = *(undefined4 *)((longlong)param_5 + 0xc);
  local_78 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) == 0) {
    local_80 = *param_5;
  }
  else {
    FUN_1400419b0(&local_80);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf4d0) &&
     (_Init_thread_header(&DAT_141ddf4d0), DAT_141ddf4d0 == -1)) {
    _DAT_141ddf43c = 0;
    _DAT_141ddf430 = 0x4000000000000000;
    _DAT_141ddf450 = 0;
    _DAT_141ddf444 = 0;
    _DAT_141ddf454 = 1;
    _DAT_141ddf464 = 0;
    _DAT_141ddf458 = 0x3ff0000000000000;
    _DAT_141ddf468 = 2;
    _DAT_141ddf478 = 0;
    _DAT_141ddf46c = 0x4008000000000000;
    _DAT_141ddf47c = 3;
    atexit((_func_5014 *)&LAB_141481540);
    _Init_thread_footer(&DAT_141ddf4d0);
  }
  uVar6 = 0;
  do {
    iVar1 = FUN_140e851f0(&DAT_141ddf430 + (longlong)(int)uVar6 * 0x14,&local_80,DAT_141955260,0);
    uVar9 = (undefined4)((ulonglong)pcVar7 >> 0x20);
    if (iVar1 == 0) {
      iVar1 = *(int *)(&DAT_141ddf440 + (longlong)(int)uVar6 * 0x14);
      if (iVar1 == 0) {
        local_d8 = 0x23;
        if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b0);
        }
        local_a4 = 0;
        local_b0 = 0x3ff0000000000000;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_b0);
        local_d8 = 0x24;
        uStack_fc = 0xf;
        local_108 = (longlong *)0x10000010000011b;
        local_f8 = 0x10000010000011b;
        uStack_f0 = uStack_100;
        uStack_ec = 0xf;
        if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_90);
        }
        FUN_140041b80(&local_90,&local_f8);
        FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_90);
        local_d8 = 0x28;
      }
      else if (iVar1 == 1) {
        local_d8 = 0x2c;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
        if (puVar3 != &local_d0) {
          local_108 = (longlong *)*puVar3;
          uStack_100 = *(undefined4 *)(puVar3 + 1);
          uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d0);
          }
          FUN_140041b80(&local_d0,&local_108);
        }
        local_res18 = &local_d0;
        uVar2 = FUN_140e634e0(param_1,param_2,&local_118,1,CONCAT44(uVar9,DAT_141a00e28),
                              &local_res18);
        uStack_ec = 0;
        local_f8 = 0xbfc999999999999a;
        local_res20 = 1;
        FUN_140042560(&local_f8,uVar2);
        local_108 = (longlong *)local_f8;
        uStack_100 = uStack_f0;
        uStack_fc = uStack_ec;
        if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a0);
        }
        FUN_140041b80(&local_a0,&local_108);
        local_res20 = 0;
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        local_d8 = 0x2e;
        uVar2 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd3c8);
        FUN_140e609c0(param_1);
        FUN_1400460e0(uVar2,&local_a0);
        FUN_140e60910(1);
        local_d8 = 0x2f;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3c8);
        uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
        FUN_140e609c0(param_1);
        FUN_1400460e0(uVar5,uVar4);
        FUN_140e60910(1);
        local_d8 = 0x31;
        uStack_ec = 0;
        local_f8 = 0x3fef5c28f5c28f5c;
        FUN_140042560(uVar2,&local_f8);
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        local_d8 = 0x32;
        if (puVar3 != &local_c0) {
          local_108 = (longlong *)*puVar3;
          uStack_100 = *(undefined4 *)(puVar3 + 1);
          uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c0);
          }
          FUN_140041b80(&local_c0,&local_108);
        }
        FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_c0);
        local_d8 = 0x34;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
        FUN_140e63610(param_1,param_2,&local_118,0,uVar2,0);
        uVar9 = (undefined4)((ulonglong)uVar2 >> 0x20);
        local_d8 = 0x36;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
        local_108 = (longlong *)CONCAT44(uRam0000000141dc66b4,_DAT_141dc66b0);
        uStack_100 = uRam0000000141dc66b8;
        uStack_fc = uRam0000000141dc66bc;
        if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d0);
        }
        FUN_140041b80(&local_d0,&local_108);
        local_res18 = &local_d0;
        ppuVar10 = &local_res18;
        uVar8 = CONCAT44(uVar9,DAT_141a0a0d8);
        puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,1,uVar8,ppuVar10);
        uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
        uStack_f0 = *(undefined4 *)(puVar3 + 1);
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
          local_f8 = *puVar3;
        }
        else {
          FUN_1400419b0(&local_f8,puVar3);
        }
        local_res20 = 2;
        uStack_fc = 7;
        local_108 = (longlong *)CONCAT44(local_108._4_4_,2);
        FUN_140042560(&local_f8,&local_108);
        if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        uVar6 = FUN_140e851f0(uVar2,&local_f8,DAT_141955260,1);
        local_res20 = 0;
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        if (uVar6 < 0x80000000) {
          local_d8 = 0x37;
          (**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
          (**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd3c8);
          uStack_fc = 6;
          uVar8 = uVar8 & 0xffffffffffffff00;
          local_108 = param_1;
          FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_70,uVar8,
                        (ulonglong)ppuVar10 & 0xffffffffffffff00);
          if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          uStack_fc = 0;
          local_108 = (longlong *)0x3ff0000000000000;
          FUN_1400462a0(&local_70,&local_108);
          if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_70);
        }
        uVar9 = (undefined4)(uVar8 >> 0x20);
        local_d8 = 0x39;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        local_108 = (longlong *)CONCAT44(uRam0000000141dc66b4,_DAT_141dc66b0);
        uStack_100 = uRam0000000141dc66b8;
        uStack_fc = uRam0000000141dc66bc;
        if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d0);
        }
        FUN_140041b80(&local_d0,&local_108);
        local_res18 = &local_d0;
        puVar3 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_118,1,CONCAT44(uVar9,DAT_141a0a0d8),
                               &local_res18);
        uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
        uStack_f0 = *(undefined4 *)(puVar3 + 1);
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
          local_f8 = *puVar3;
        }
        else {
          FUN_1400419b0(&local_f8,puVar3);
        }
        local_res20 = 4;
        uStack_fc = 7;
        local_108 = (longlong *)CONCAT44(local_108._4_4_,5);
        FUN_140042560(&local_f8,&local_108);
        if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        uVar6 = FUN_140e851f0(uVar2,&local_f8,DAT_141955260,1);
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        if (uVar6 < 0x80000000) {
          local_d8 = 0x3a;
          (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
          FUN_140edd0e0(param_1,param_2,0,0);
        }
        local_d8 = 0x3c;
      }
      else if (iVar1 == 2) {
        local_d8 = 0x40;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_118,0,uVar2,0);
        local_d8 = 0x42;
      }
      else if (iVar1 == 3) {
        local_d8 = 0x46;
      }
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  _eh_vector_destructor_iterator_(&local_d0,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

