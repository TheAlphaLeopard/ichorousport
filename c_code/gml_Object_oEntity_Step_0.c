// gml_Object_oEntity_Step_0 @ 0x140ac6960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEntity_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_fffffffffffffee0;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 local_48 [16];
  longlong local_38;
  
  local_d0 = "gml_Object_oEntity_Destroy_0";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  pcVar5 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_c8 = 2;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f26d8);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_c8 = 4;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uStack_10c = 6;
    local_118 = local_res8;
    in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffffffffffff00;
    uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
    FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_e8,uVar6,in_stack_fffffffffffffee0);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    uStack_10c = 6;
    local_118 = local_res8;
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_f8,uVar6,
                  in_stack_fffffffffffffee0 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar6 >> 0x20);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = (longlong *)local_e8;
    uStack_110 = uStack_e0;
    uStack_10c = uStack_dc;
    if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_118);
    local_68 = local_b8;
    local_118 = (longlong *)local_f8;
    uStack_110 = uStack_f0;
    uStack_10c = uStack_ec;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_118);
    local_60 = local_a8;
    local_118 = (longlong *)CONCAT44(uRam0000000141dd91fc,_DAT_141dd91f8);
    uStack_110 = uRam0000000141dd9200;
    uStack_10c = DAT_141dd9204;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_118);
    local_58 = local_98;
    uStack_10c = 0xf;
    local_118 = (longlong *)0x1000000000000e6;
    local_78 = 0xe6;
    uStack_74 = 0x1000000;
    uStack_70 = uStack_110;
    uStack_6c = 0xf;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_78);
    local_50 = local_88;
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_108,4,CONCAT44(uVar7,DAT_141a0a7c8),
                          &local_68);
    iVar2 = FUN_140e63cb0(local_48,&local_res8,&local_res10,uVar3);
    if (0 < iVar2) {
      do {
        local_c8 = 6;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        *puVar4 = 0xc008000000000000;
        local_c8 = 7;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_108 = 0;
        local_100 = 0;
        local_fc = 5;
        uStack_10c = 0xf;
        local_118 = (longlong *)0x100000000000149;
        local_78 = 0x149;
        uStack_74 = 0x1000000;
        uStack_70 = uStack_110;
        uStack_6c = 0xf;
        if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_78);
        local_68 = local_b8;
        gml_GlobalScript_world_pos_to_gui(local_res8,local_res10,&local_108,1,&local_68);
        cVar1 = FUN_140e643f0(local_48,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_48,&local_res8,&local_res10);
    if (local_38 != 0) {
      FUN_140e4cd60();
    }
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return;
}

